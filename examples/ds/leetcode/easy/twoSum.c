/**
 * @file              twoSum.c
 * @brief             两数之和
 * @version           0.1
 * @author            brightl birigtl3016@outlook.com
 * @date              2025.05.06
 * @copyright         Copyright (c) 2025.
 *
 * @note              Revision History:
 * <table>
 * <tr><th>Date       <th>Version         <th>Author          <th>Description
 * <tr><td>2025.05.06 <td>0.1             <td>brightl         <td>description
 * </table>
 */

/*
两数之和：
（1）给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和 为目标值 target  的那 两个 整数，并返回它们的数组下标
（2）你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素
（3）你可以按任意顺序返回答案

示例：
（1）示例1
    - 输入：nums = [2,7,11,15], target = 9
    - 输出：[0,1]
    - 解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1]

（2）示例2
    - 输入：nums = [3,2,4], target = 6
    - 输出：[1,2]

（3）示例3
    - 输入：nums = [3,3], target = 6
    - 输出：[0,1]

提示：
（1）2 <= nums.length <= 104
（2）-109 <= nums[i] <= 109
（3）-109 <= target <= 109
（4）只会存在一个有效答案

*/

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief             方法一：暴力枚举
 * @param   nums      给定整数数组 nums
 * @param   numSize   给定整数数组的长度 size
 * @param   target    目标值 target
 * @param   ret_size  返回值的数组的长度 ret size 
 * @return  int*      返回一个指向数组的指针 ret，数组和指针可以无缝切换
 *
 * @note              Revision History
 */
/*
方法一：暴力枚举
核心思想：
（1）通过双重循环遍历数组中所有可能的元素对 (nums[i], nums[j])，检查它们的和是否等于 target

思路及算法：
（1）最容易想到的方法是枚举数组中的每一个数 x，寻找数组中是否存在  target - x
（2）当我们使用遍历整个数组的方式寻找 target - x 时，需要注意到每一个位于 x 之前的元素都已经和 x 匹配过，因此不需要再进行匹配。而每一个元素不能被使用两次，所以我们只需要在 x 后面的元素中寻找 target - x

复杂度分析：
（1）时间复杂度：O(N^2)，其中 N 是数组中的元素数量。最坏情况下数组中任意两个数都要被匹配一次
 - O(1)	    数组随机访问	     操作次数与输入规模无关
 - O(logN)	二分查找	        每次操作将问题规模减半
 - O(N)	    遍历数组	        操作次数与输入规模成线性关系
 - O(NlogN)	快速排序、归并排序	分治法的典型复杂度
 - O(N^2)	  冒泡排序、暴力枚举两数之和	双重循环嵌套
 - O(2^N)	  穷举所有子集	     指数级增长，效率极低

（2）空间复杂度：O(1)
 - O(1)	    冒泡排序、暴力枚举两数之和	   只使用常数个变量
 - O(N)	    归并排序、哈希表优化的两数之和	需要额外数组或哈希表存储数据
 - O(N^2)	  动态规划（某些场景）	        二维数组存储中间结果

*/ 
int *twoSum(int *nums, int numSize, int target, int* ret_size) {
  for (int i = 0; i < numSize; i++) {
    for (int j = i + 1; j < numSize; j++) {
      // nums[i] + nums[j] = target  
      if (nums[i] == target - nums[j]) {
        // 使用时再创建、与创建完成再使用的区别和场景
        int *ret = malloc(sizeof(int) * 2);
        ret[0] = i, ret[1] = j;
        *ret_size = 2;
        return ret;
      }
    }
  }
  *ret_size = 0;
  return NULL;
}

int main(void) {
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int size = 0;
    int* ret_size = &size;
    int* ret1 = twoSum(nums1, 4, target1, ret_size);
    printf("ret1 : ret1[0] = %d, ret1[1] = %d\n", ret1[0], ret1[1]);
    printf("ret_size = %d\n", *ret_size);
    free(ret1);

    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int* ret2 = twoSum(nums2, 3, target2, ret_size);
    printf("ret2 : ret2[0] = %d, ret2[1] = %d\n", ret2[0], ret2[1]);
    printf("ret_size = %d\n", *ret_size);
    free(ret2);   
    
    int nums3[] = {3, 3};
    int target3 = 6;
    int* ret3 = twoSum(nums3, 3, target3, ret_size);
    printf("ret3 : ret3[0] = %d, ret3[1] = %d\n", ret3[0], ret3[1]);
    printf("ret_size = %d\n", *ret_size);
    free(ret3); 
}