/**
* @file              ascii_chart.cpp
* @brief             brief
* @version           0.1
* @author            brightl birigtl3016@outlook.com
* @date              2025.07.03
* @copyright         Copyright (c) 2025.
*
* @note              Revision History:
* <table>
* <tr><th>Date       <th>Version         <th>Author          <th>Description
* <tr><td>2025.07.03 <td>0.1             <td>brightl         <td>description
* </table>
*/

#include <iostream>

#define TOUR_CPP_BASIC_CONCEPTS_CHARACTER_ENCODINGS

/**
* @brief             brief
* @return  int       Return Description
*
* @note              Revision History
*/
auto ascii_chart_fn() -> int
{

    std::cout << "ascii chart function begin..." << std::endl;

    std::cout << "Printable ASCII [32..126]:\n";
    for (char c{' '}; c <= '~'; ++c)
        std::cout << c << ((c + 1) % 32 ? ' ' : '\n');
    std::cout << '\n';

    // 可能的输出：
    // 
    // Printable ASCII [32..126]:
    //   ! " # $ % & ' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ?
    // @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ \ ] ^ _
    // ` a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~
    
    return 0;
}