### 数据库内核开发学习大纲

以下是一个从零开始学习分布式数据库内核与存储开发的详细学习大纲，分为基础、进阶和实战三个阶段，涵盖理论、技术和实践内容。建议学习周期为12-18个月。

---

### **第一阶段：基础铺垫（1-3个月）**
#### **1. 数据库系统基础**
- 数据库系统概述
  - OLTP/OLAP/HTAP

- 关系型数据库核心理论：
  - ACID、CAP定理、BASE理论、范式理论

- 事务与并发控制：
  - 锁机制（行锁、表锁）、MVCC、隔离级别（RU/RC/RR/Serializable）

- 数据库核心组件：
  - 存储引擎、查询优化器、事务管理器、日志系统

- 经典架构学习：
  - MySQL/PostgreSQL的源码结构分析


#### **2. 计算机基础**
- **操作系统**：
  - 进程/线程/协程、文件系统（Ext4/Btrfs/ZFS）、内存管理、I/O模型
  - 书籍：《操作系统导论》《UNIX环境高级编程》

- **数据结构和算法**：
  - 持久化数据结构：B+树、LSM树、跳表
  - 哈希表、布隆过滤器、基数树（Radix Tree）
  - 图算法（最短路径等）
  - 书籍：《算法导论》《算法（第4版）》
  - 分布式算法：Paxos、Raft、Gossip协议
- **网络基础**：
  - TCP/IP协议栈、HTTP/2、RPC框架（gRPC）、一致性哈希、网络分区与容错
  - 书籍：《计算机网络：自顶向下方法》


#### **3. 编程语言与工具**
- **语言**：
  - C++（推荐）或 Rust（现代存储系统常用）

- **工具链**：
  - GDB调试、Valgrind内存检测、性能分析工具（perf）

- **编译与构建**：
  - CMake、Bazel


---

### **第二阶段：数据库内核开发（4-9个月）**
#### **1. 存储引擎开发**
- **单机存储引擎**：
  - 基于B+树的存储（InnoDB风格）
  - LSM树实现（LevelDB/RocksDB源码分析）
  - 内存数据库设计（Redis-like）
  - 项目：基于LSM-Tree实现KV存储（参考RocksDB）
- **数据持久化**：
  - WAL（Write-Ahead Logging）与故障恢复
  - 页面管理（Page Cache、Buffer Pool）
  - 内存管理 缓存替换算法（LRU-K、ARC）、内存池设计
  - 数据压缩与编码 Snappy/ZSTD、列式存储编码（RLE、Dictionary）
- **索引优化**：
  - 多列索引、覆盖索引、自适应哈希索引
  - 向量化索引（现代OLAP场景）

#### **2. 查询处理与优化**
- 解析器与执行计划生成（Parser、Optimizer）
  - 实现SQL解析（ANTLR）、代价模型、连接算法（Hash Join、Merge Join）

- 向量化执行引擎
  - 火山模型（Volcano Model）与向量化执行（Vectorized Execution）

- 统计信息收集与代价模型
  - Cost-based Optimization


#### **3. 事务与并发控制**
- 事务隔离级别
  - Read Committed、Repeatable Read

- 锁管理器（Lock Manager）与死锁检测
- MVCC（多版本并发控制）实现
- 分布式事务
  - 2PC、3PC、Saga模式


#### **4. 日志与恢复机制**
- Redo/Undo Log设计与实现
- Checkpoint机制（模糊检查点、Sharp Checkpoint）
- ARIES恢复算法解析

---

### **第三阶段：分布式存储与数据库（10-12个月）**
#### **1. 分布式系统基础**
- 一致性协议：
  - Raft（etcd实现）、Paxos（Chubby/ZooKeeper）、ZAB协议，动手实现Raft核心逻辑

- 分布式事务：
  - 2PC/3PC、TCC、Saga、Spanner的TrueTime、Percolator模型

- 数据分片（Sharding）策略：
  - Range-based、Hash-based、一致性哈希、动态负载均衡（如Vitess）

- 副本管理：
  - 主从复制、多主复制、Quorum机制

- RPC框架
  - gRPC或brpc，实现自定义序列化与流控策略

#### **2. 分布式存储引擎**
- 分布式LSM树
  - CockroachDB的Pebble引擎

- 分布式B+树
  - Google Spanner的Colossus

- 对象存储与分布式文件系统
  - HDFS、Ceph架构，实现简单分布式文件系统


#### **3. 分布式查询与优化**
- 分布式执行计划
  - F1 Query、TiDB的MPP架构

- 数据本地化
  - Data Locality 优化

- 全局时钟与一致性读
  - Hybrid Logical Clock


#### **4. 容错与高可用**
- 故障检测与自动故障转移（Failover）
- 多副本同步、异地多活
- 脑裂（Split-Brain）问题与解决方案
- 数据修复与一致性校验
  - Merkle Tree、CRDT


---

### **第四阶段：高级主题与实战（12-18个月）**
#### **1. 现代存储技术**
- 存储引擎优化：
  - 面向SSD的优化（Zone Mapping、FTL-aware设计）

- 新型存储结构：
  - MassTree、SSTable、Delta Tree、Bw-Tree

- 数据压缩与编码：
  - ZSTD、Snappy、Delta Encoding


#### **2. 云原生与混合架构**
- 存算分离（Snowflake、PolarDB）
- Kubernetes调度、Serverless数据库设计（FaunaDB）
- 云原生存储（AWS Aurora、Google Bigtable）、块存储与数据库结合（如AWS Aurora）
- 混合存储引擎 
  - 热数据内存存储（Redis）+ 冷数据磁盘存储的混合架构

- 持久化内存（PMEM）
  - 探索Intel Optane在数据库日志中的应用

- HTAP融合
  - 研究行列混合存储（如Apache Kudu）、实时分析优化


#### **3. 性能优化与调优**
- 全链路 profiling（CPU Cache、NUMA、RDMA）、尾延迟优化
- 多核并发（无锁数据结构、RCU）
- NUMA架构优化
- 向量化执行与JIT编译
  - Apache Arrow、ClickHouse

- AI for DB
  - 自动调参（如Oracle MySQL Autopilot）、查询计划AI优化
- 安全与合规
  - 数据加密（TDE）、审计日志、GDPR兼容设计


#### **4. 实战项目**
- **自研单机数据库**：
  - 实现一个简化版SQL引擎（支持CRUD、事务）

- **分布式KV存储**：
  - 基于Raft实现高可用分片存储（类似TiKV）

- **参与开源项目**：
  - 向RocksDB、TiDB、CockroachDB贡献代码

- **性能压测**：
  - 使用YCSB、TPC-C/TPC-H验证系统性能


---

### 第五阶段：**学习资源推荐**
1. **书籍**：
   - 《Database System Concepts》（数据库系统概念）
   - 《Designing Data-Intensive Applications》（数据密集型应用系统设计）
   - 《Database Internals》（数据库内核解析）
2. **开源项目**：
   - RocksDB、TiKV、CockroachDB、FoundationDB
3. **论文**：
   - Google Spanner、Amazon Aurora、Facebook RocksDB
   - 经典论文：The Log-Structured Merge-Tree (LSM)、ARIES Recovery Algorithm

---

### **第六阶段：后续方向**
- **云原生数据库**：
  - 结合Kubernetes的弹性扩缩容

- **AI与数据库结合**：
  - Learned Indexes（学习型索引）

- **硬件加速**：
  - 利用RDMA、FPGA/GPU优化存储性能


---

通过这个大纲的系统学习，你将能够深入理解分布式数据库的核心技术，并具备从零开发高性能数据库系统的能力。