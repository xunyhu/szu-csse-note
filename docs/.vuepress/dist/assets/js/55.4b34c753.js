(window.webpackJsonp=window.webpackJsonp||[]).push([[55],{342:function(_,v,l){"use strict";l.r(v);var i=l(14),u=Object(i.a)({},(function(){var _=this,v=_._self._c;return v("ContentSlotsDistributor",{attrs:{"slot-key":_.$parent.slotKey}},[v("h2",{attrs:{id:"_2-1-进程的描述"}},[v("a",{staticClass:"header-anchor",attrs:{href:"#_2-1-进程的描述"}},[_._v("#")]),_._v(" 2.1 进程的描述")]),_._v(" "),v("ol",[v("li",[v("p",[_._v("程序的并发执行")]),_._v(" "),v("ul",[v("li",[_._v("1.程序的顺序执行\n"),v("ul",[v("li",[_._v("特点：1.顺序性：下一步操作要等待前一操作结束；2.封闭性：执行独占资源，不受外界影响；3.可再现性：重复执行将获得相同结果。")])])]),_._v(" "),v("li",[_._v("2.程序的并发执行\n"),v("ul",[v("li",[_._v("含义：程序并发执行是指在同一时间间隔内运行多个程序，一个程序执行结束之前，可以运行其他程序。")]),_._v(" "),v("li",[_._v("特点：1.间断性；2.失去封闭性；3.不可再现性")])])])])]),_._v(" "),v("li",[v("p",[_._v("进程的概念")]),_._v(" "),v("ul",[v("li",[v("p",[_._v("1."),v("strong",[_._v("进程的定义")])]),_._v(" "),v("ul",[v("li",[_._v("定义 1：进程是允许并发执行的程序在某个数据集合上的"),v("code",[_._v("运行过程")])]),_._v(" "),v("li",[_._v("定义 2：进程是由"),v("code",[_._v("正文段")]),_._v("、"),v("code",[_._v("用户数据段")]),_._v("及"),v("code",[_._v("进程控制块")]),_._v("共同组成的"),v("strong",[_._v("执行环境")]),_._v(" "),v("ul",[v("li",[_._v("正文段：描述进程要完成的功能，存放机器指令")]),_._v(" "),v("li",[_._v("数据段：进程执行时直接进行操作的用户数据")]),_._v(" "),v("li",[_._v("进程控制块 PCB：存放程序的运行环境")])])])])]),_._v(" "),v("li",[v("p",[_._v("2."),v("strong",[_._v("进程的特征")])]),_._v(" "),v("ul",[v("li",[_._v("1）并发；2）动态；3）独立；4）异步；5）结构特征\n"),v("ul",[v("li",[_._v("并发：多个进程同时执行，现代操作系统的重要特征")]),_._v(" "),v("li",[_._v("动态性：进程实体的执行过程，创建——执行——消亡")]),_._v(" "),v("li",[_._v("独立性：资源独立，互不干扰")]),_._v(" "),v("li",[_._v("异步性：速度不可预知，执行随机")]),_._v(" "),v("li",[_._v("结构特征：进程由正文段、用户数据段、进程控制块组成")])])])])]),_._v(" "),v("li",[v("p",[_._v("3.进程与程序的比较")]),_._v(" "),v("ul",[v("li",[_._v("含义：进程是程序的一次执行，进程总是对应至少一个特定的程序，执行程序的代码。")]),_._v(" "),v("li",[_._v("进程与程序的比较\n"),v("ul",[v("li",[_._v("进程是动态的，程序是静态的")]),_._v(" "),v("li",[_._v("进程是暂时，程序是永久")]),_._v(" "),v("li",[_._v("存在实体不同，程序是指令集合，进程由正文段+数据段+PCB 组成")])])]),_._v(" "),v("li",[_._v("进程与程序的联系\n"),v("ul",[v("li",[_._v("进程是程序的一次执行")]),_._v(" "),v("li",[_._v("一个程序可以对应多个进程（一个程序对应不同数据集合运行多个进程；多个进程并发执行同一个程序代码）")])])])])])])]),_._v(" "),v("li",[v("p",[_._v("进程控制块（PCB）")]),_._v(" "),v("ul",[v("li",[v("p",[_._v("1.什么是进程控制块")]),_._v(" "),v("ul",[v("li",[_._v("进程控制块是进程实体的一部分，是操作系统中最重要的"),v("code",[_._v("数据结构")]),_._v("。进程控制块中记录了操作系统所需要的、用于描述进程情况及控制进程运行所需的全部信息。\n"),v("ul",[v("li",[_._v("每个进程有唯一 PCB")]),_._v(" "),v("li",[_._v("PCB 是进程存在的唯一标志")]),_._v(" "),v("li",[_._v("OS 通过 PCB 控制和管理进程")]),_._v(" "),v("li",[_._v("OS 通过 PCB 感知进程的存在")])])])])]),_._v(" "),v("li",[v("p",[_._v("2.进程控制块中的信息")]),_._v(" "),v("ul",[v("li",[_._v("1）进程标识符信息；2）处理机状态信息；3）进程调度信息；4）进程控制信息\n"),v("ul",[v("li",[_._v("进程标识符 PID：唯一标识一个进程")]),_._v(" "),v("li",[_._v("处理机状态信息：处理机内各种寄存器的内容\n"),v("ul",[v("li",[_._v("通用寄存器，用户程序访问的寄存器")]),_._v(" "),v("li",[_._v("PC，指令计数器")]),_._v(" "),v("li",[_._v("PSW，程序状态字")]),_._v(" "),v("li",[_._v("用户栈指针，用户进程相关的系统栈")])])]),_._v(" "),v("li",[_._v("进程调度信息：进程状态、优先级、调度等信息")]),_._v(" "),v("li",[_._v("进程控制信息：进程资源信息\n"),v("ul",[v("li",[_._v("程序和数据地址、进程同步和通信机制、资源清单、链接指针")])])])])])])])])]),_._v(" "),v("li",[v("p",[v("strong",[_._v("进程的状态")])]),_._v(" "),v("ul",[v("li",[v("p",[_._v("1.进程的 3 种基本状态")]),_._v(" "),v("ul",[v("li",[_._v("就绪态：已经获得 CPU 以外所有资源，处于就绪队列")]),_._v(" "),v("li",[_._v("执行态：获得 CPU，处于执行过程")]),_._v(" "),v("li",[_._v("阻塞态：发生某种事件暂时无法进行，放弃 CPU 处于暂停状态，如请求 I/O，请求缓冲空间，处于阻塞队列")])])]),_._v(" "),v("li",[v("p",[_._v("2.进程状态的转换")]),_._v(" "),v("ul",[v("li",[_._v("就绪态————>执行态，调度操作")]),_._v(" "),v("li",[_._v("执行态————>就绪态，时间片机制")]),_._v(" "),v("li",[_._v("执行态————>阻塞态，阻塞操作")]),_._v(" "),v("li",[_._v("阻塞态————>就绪态，唤醒操作")]),_._v(" "),v("li",[_._v("唤醒过程：进程状态由阻塞态变为就绪态的过程")]),_._v(" "),v("li",[_._v("阻塞过程：由执行态变为阻塞态的过程")])])]),_._v(" "),v("li",[v("p",[_._v("3.Linux 的进程状态")])])])]),_._v(" "),v("li",[v("p",[_._v("进程的组织方式")]),_._v(" "),v("ul",[v("li",[_._v("1.链接方式")]),_._v(" "),v("li",[_._v("2.索引方式")]),_._v(" "),v("li",[_._v("3.进程队列")])])])]),_._v(" "),v("h2",{attrs:{id:"_2-2-进程的控制"}},[v("a",{staticClass:"header-anchor",attrs:{href:"#_2-2-进程的控制"}},[_._v("#")]),_._v(" 2.2 进程的控制")]),_._v(" "),v("ol",[v("li",[v("p",[_._v("进程的创建")]),_._v(" "),v("ul",[v("li",[_._v("创建新进程包括为进程分配必要的资源，建立操作系统用于管理进程的数据结构等操作。")]),_._v(" "),v("li",[_._v("进程创建的起因\n"),v("ul",[v("li",[_._v("用户登录：winlogon")]),_._v(" "),v("li",[_._v("作业调度")]),_._v(" "),v("li",[_._v("提供服务")]),_._v(" "),v("li",[_._v("应用请求：Unix 的 fork()，Win 的 CreatProcess()")])])]),_._v(" "),v("li",[_._v("进程创建的步骤\n"),v("ul",[v("li",[_._v("1）申请空白 PCB")]),_._v(" "),v("li",[v("ol",{attrs:{start:"2"}},[v("li",[_._v("为新进程分配资源")])])]),_._v(" "),v("li",[v("ol",{attrs:{start:"3"}},[v("li",[_._v("初始化进程控制块")])])]),_._v(" "),v("li",[_._v("4）将新进程插入就绪队列")])])]),_._v(" "),v("li",[_._v("进程创建的关系\n"),v("ul",[v("li",[_._v("父进程：由系统或用户首先创建的进程")]),_._v(" "),v("li",[_._v("子进程：父进程创建的进程")]),_._v(" "),v("li",[_._v("父子进程关系：\n"),v("ul",[v("li",[_._v("进程控制：子进程由父进程创建或撤销，子进程不能控制父进程")]),_._v(" "),v("li",[_._v("资源继承：子进程可以全部或部分共享父进程的资源")]),_._v(" "),v("li",[_._v("运行方式：可同时进行，可以控制先后")]),_._v(" "),v("li",[_._v("数据结构：在 PCB 中设置家族关系表项，标明自己的父进程和子进程。")])])])])]),_._v(" "),v("li",[_._v("进程相关的系统命令\n"),v("ul",[v("li",[_._v("Windows\n"),v("ul",[v("li",[_._v("TASKLIST， tasklisk - svc，tasklist -n")]),_._v(" "),v("li",[_._v("TSKILL")]),_._v(" "),v("li",[_._v("NTSD -c q -p PID")])])]),_._v(" "),v("li",[_._v("Linux\n"),v("ul",[v("li",[_._v("程序使用 fork()函数创建进程")]),_._v(" "),v("li",[_._v("系统调用是 clone 和 vfork")])])])])])])]),_._v(" "),v("li",[v("p",[_._v("进程的阻塞")]),_._v(" "),v("ul",[v("li",[v("p",[_._v("进程阻塞的起因")]),_._v(" "),v("ul",[v("li",[_._v("请求系统服务")]),_._v(" "),v("li",[_._v("启动某种操作")]),_._v(" "),v("li",[_._v("新数据尚未到达")]),_._v(" "),v("li",[_._v("无新工作可做")])])]),_._v(" "),v("li",[v("p",[_._v("进程阻塞的过程")]),_._v(" "),v("ul",[v("li",[_._v("1）将进程的状态改为阻塞态")]),_._v(" "),v("li",[_._v("2）将进程插入相应的阻塞队列")]),_._v(" "),v("li",[_._v("3）转进程调度程序，从就绪进程中选择进程为其分配 CPU")])])])])]),_._v(" "),v("li",[v("p",[_._v("进程的唤醒")]),_._v(" "),v("ul",[v("li",[_._v("进程唤醒的过程\n"),v("ul",[v("li",[_._v("1）将进程从阻塞队列中移出")]),_._v(" "),v("li",[_._v("2）将进程状态由阻塞态改为就绪态")]),_._v(" "),v("li",[_._v("3）将进程插入就绪队列")])])])])]),_._v(" "),v("li",[v("p",[_._v("进程的终止")]),_._v(" "),v("ul",[v("li",[_._v("进程终止的起因\n"),v("ul",[v("li",[_._v("正常结束：halt、Logoff")]),_._v(" "),v("li",[_._v("异常结束：越界错误、保护错、非法指令、特权指令错、运行超时、等待超时、算术运算错、I/O 故障")]),_._v(" "),v("li",[_._v("系统调用：操作员或 OS 干预、父进程请求或父进程终止")])])]),_._v(" "),v("li",[_._v("进程终止的过程\n"),v("ul",[v("li",[_._v("从进程 PCB 中读进程状态")]),_._v(" "),v("li",[_._v("若进程正在执行，则终止进程的执行")]),_._v(" "),v("li",[_._v("若进程有子孙进程，在大多数情况下需要终止子孙进程")]),_._v(" "),v("li",[_._v("释放资源")]),_._v(" "),v("li",[_._v("将终止进程的 PCB 移出")])])])])]),_._v(" "),v("li",[v("p",[_._v("操作系统的启动和系统中进程的出现")]),_._v(" "),v("ul",[v("li",[_._v("操作系统的启动和进程变化\n"),v("ul",[v("li",[_._v("硬盘启动\n"),v("ul",[v("li",[_._v("如果是单系统，引导扇区是 0 柱面 0 磁道 1 扇区，BIOS 将它装入到内存，并开始加载操作系统。")]),_._v(" "),v("li",[_._v("如果是多分区多系统，主引导扇区是 0 柱面 0 磁道 1 扇区，会通过它判断当前激活分区，再加载相应的操作系统。")])])]),_._v(" "),v("li",[_._v("OS 启动")])])])])])]),_._v(" "),v("h2",{attrs:{id:"_2-3-操作系统内核"}},[v("a",{staticClass:"header-anchor",attrs:{href:"#_2-3-操作系统内核"}},[_._v("#")]),_._v(" 2.3 操作系统内核")]),_._v(" "),v("ul",[v("li",[_._v("操作系统是计算机硬件的第一次扩充，内核执行操作系统与硬件关系密切，执行频率高的模块，常住内存。操作系统内核的功能：1.支撑功能；2.资源管理功能。\n"),v("ul",[v("li",[_._v("支撑功能：包括中断处理、时钟管理、原语操作，原语操作是一种原子操作，不可分割，不能中断，例如阻塞原语 block，唤醒原语 wakeup")]),_._v(" "),v("li",[_._v("资源管理功能：包括进程管理、存储管理、设备管理")])])])]),_._v(" "),v("ol",[v("li",[v("p",[_._v("中断")]),_._v(" "),v("ul",[v("li",[_._v("概念：改变 CPU 执行指令顺序的一种事件")]),_._v(" "),v("li",[_._v("类型\n"),v("ul",[v("li",[_._v("同步中断（内部中断）：执行异常，可能是出错、调试、溢出")]),_._v(" "),v("li",[_._v("异步中断（外部中断）：由其他硬件设备引发；可屏蔽/不可屏蔽")])])]),_._v(" "),v("li",[_._v("中断原因\n"),v("ul",[v("li",[_._v("人为设置、程序性事件、硬件故障、I/O 设备、外部事件")])])]),_._v(" "),v("li",[_._v("中断响应\n"),v("ul",[v("li",[_._v("相应条件是要开中断，即不屏蔽")]),_._v(" "),v("li",[_._v("响应时机：每执行完一条指令后，检测一次是否有中断信号")])])]),_._v(" "),v("li",[_._v("中断过程\n"),v("ul",[v("li",[_._v("中断检测")]),_._v(" "),v("li",[_._v("响应中断（关中断）")]),_._v(" "),v("li",[_._v("保护现场")]),_._v(" "),v("li",[_._v("执行中断服务子程序（处理中断原因的事件）")]),_._v(" "),v("li",[_._v("恢复现场")]),_._v(" "),v("li",[_._v("开中断")]),_._v(" "),v("li",[_._v("继续执行")])])]),_._v(" "),v("li",[_._v("中断服务子程序\n"),v("ul",[v("li",[_._v("CPU 层次，使用中断向量")]),_._v(" "),v("li",[_._v("操作系统层次，使用中断描述符表")])])])])]),_._v(" "),v("li",[v("p",[_._v("时钟管理")]),_._v(" "),v("ul",[v("li",[_._v("操作系统内核利用时钟机制防止单个进程垄断 CPU")]),_._v(" "),v("li",[_._v("系统时钟\n"),v("ul",[v("li",[_._v("实时时钟，RTC 时钟，CMOS 时钟")]),_._v(" "),v("li",[_._v("OS 时钟，产生于主板定时/计数芯片")])])]),_._v(" "),v("li",[_._v("操作系统内核需要完成两种定时测量\n"),v("ul",[v("li",[_._v("保存当前日期时间")]),_._v(" "),v("li",[_._v("维持定时器")])])]),_._v(" "),v("li",[_._v("操作系统依靠两种方法完成定时测量\n"),v("ul",[v("li",[_._v("OS 时钟管理硬件（可编程间隔定时器 PIT）")]),_._v(" "),v("li",[_._v("时钟软件，时钟驱动程序")])])])])]),_._v(" "),v("li",[v("p",[_._v("系统调用")]),_._v(" "),v("ul",[v("li",[v("strong",[_._v("系统调用的概念")]),_._v(" "),v("ul",[v("li",[_._v("一群预定义模块")]),_._v(" "),v("li",[_._v("它们提供一条管道为应用程序或用户提供核心程序服务")])])]),_._v(" "),v("li",[_._v("系统调用是系统程序和用户程序之间的接口")]),_._v(" "),v("li",[_._v("用户态执行、系统态执行的概念\n"),v("ul",[v("li",[_._v("用户态执行：用户空间是指用户进程所处的地址空间，一个用户进程不能访问其他进程的用户空间，只有系统程序才能访问其他用户空间。当 CPU 执行用户空间的代码时，称该进程在用户态执行。")]),_._v(" "),v("li",[_._v("系统态执行：系统空间是指含有一切系统核心代码的地址空间，当 CPU 执行系统核心代码时，称进程处于系统态执行。")])])]),_._v(" "),v("li",[_._v("系统调用和一般函数调用的区别\n"),v("ul",[v("li",[_._v("1）系统调用运行在系统态（核心态），而一般函数运行在用户态")]),_._v(" "),v("li",[_._v("2）系统调用与一般函数调用的执行过程不同。系统调用执行时，当前进程被中断，由系统找相应的系统调用子程序，并在系统态下执行，执行结果返回进程。")]),_._v(" "),v("li",[_._v("3）系统调用要进行“中断处理”，比一般函数调用多了一些系统开销")])])]),_._v(" "),v("li",[_._v("系统调用类型")]),_._v(" "),v("li",[_._v("Linux 系统调用举例")])])])]),_._v(" "),v("h2",{attrs:{id:"_2-4-进程同步"}},[v("a",{staticClass:"header-anchor",attrs:{href:"#_2-4-进程同步"}},[_._v("#")]),_._v(" 2.4 "),v("strong",[_._v("进程同步")])]),_._v(" "),v("p",[_._v("多任务操作系统支持多个进程并发执行，并发执行的进程共享系统的软件和硬件资源。"),v("br"),_._v("\n操作系统同步机制的主要任务就是要保证在多任务共享系统资源的情况下，程序执行能得到正确的结果。")]),_._v(" "),v("ol",[v("li",[v("p",[_._v("进程同步的基本概念")]),_._v(" "),v("ul",[v("li",[_._v("进程之间存在资源共享关系和相互合作关系")]),_._v(" "),v("li",[_._v("因此进程同步有两个任务\n"),v("ul",[v("li",[_._v("一是对具有资源共享关系的进程，保证诸进程以互斥方式访问临界资源")]),_._v(" "),v("li",[_._v("二是对具有相互合作关系的进程，保证进程协调执行，可能同时存在资源共享的关系")]),_._v(" "),v("li",[v("code",[_._v("临界资源")]),_._v("是指必须以"),v("code",[_._v("互斥方式访问")]),_._v("的共享资源")])])])])]),_._v(" "),v("li",[v("p",[_._v("同步机制应遵循的准则")]),_._v(" "),v("ul",[v("li",[_._v("1）空闲让进")]),_._v(" "),v("li",[_._v("2）忙则等待")]),_._v(" "),v("li",[_._v("3）有限等待")]),_._v(" "),v("li",[_._v("4）让权等待：释放 CPU、避免忙等")])])]),_._v(" "),v("li",[v("p",[_._v("信号量机制")]),_._v(" "),v("ul",[v("li",[_._v("作用：实现进程的同步")]),_._v(" "),v("li",[_._v("1）整型信号量机制\n"),v("ul",[v("li",[_._v("使用一个代表资源数目的整型变量，即一个信号量且是整数变量")]),_._v(" "),v("li",[_._v("两个标准原子操作访问信号量：wait(S)和 signal(S)，坚持 P、V 操作")])])]),_._v(" "),v("li",[_._v("2）记录型信号量机制\n"),v("ul",[v("li",[_._v("记录型信号量机制的优点是不存在“忙等”，采取了“让权等待”的策略。")])])]),_._v(" "),v("li",[_._v("3）AND 型信号量机制")])])]),_._v(" "),v("li",[v("p",[_._v("经典的进程同步问题")]),_._v(" "),v("ul",[v("li",[_._v("1）"),v("strong",[_._v("生产者-消费者问题")])]),_._v(" "),v("li",[_._v("2）"),v("strong",[_._v("读者-写者问题")])])])]),_._v(" "),v("li",[v("p",[_._v("管程")]),_._v(" "),v("ul",[v("li",[_._v("1）管程的基本概念")]),_._v(" "),v("li",[_._v("2）管程的应用")])])])]),_._v(" "),v("h2",{attrs:{id:"_2-5-进程通信"}},[v("a",{staticClass:"header-anchor",attrs:{href:"#_2-5-进程通信"}},[_._v("#")]),_._v(" 2.5 进程通信")]),_._v(" "),v("p",[_._v("进程之间的高级通信机制：分为共享存储器系统、消息传递系统和管道通信系统。"),v("br"),_._v("\n信号量机制属于进程间的低级通信")]),_._v(" "),v("ol",[v("li",[v("p",[_._v("共享存储器系统")]),_._v(" "),v("ul",[v("li",[_._v("两种类型：1）共享数据结构；2）共享存储区")])])]),_._v(" "),v("li",[v("p",[_._v("消息传递系统")]),_._v(" "),v("ul",[v("li",[_._v("直接通信方式；间接通信方式")])])]),_._v(" "),v("li",[v("p",[_._v("管道通信")]),_._v(" "),v("ul",[v("li",[_._v("以文件方式连接读写进程")])])]),_._v(" "),v("li",[v("p",[_._v("消息缓冲队列")]),_._v(" "),v("ul",[v("li",[_._v("广泛应用本地进程通信")]),_._v(" "),v("li",[_._v("包括数据结构、发送原语、接收原语")])])])]),_._v(" "),v("h2",{attrs:{id:"_2-6-线程"}},[v("a",{staticClass:"header-anchor",attrs:{href:"#_2-6-线程"}},[_._v("#")]),_._v(" 2.6 线程")]),_._v(" "),v("ol",[v("li",[v("p",[_._v("线程的描述")]),_._v(" "),v("ul",[v("li",[_._v("进程的不足\n"),v("ul",[v("li",[_._v("为使程序能并发执行，系统必须进行系列操作：创建、撤销、切换进程")]),_._v(" "),v("li",[_._v("进程同时作为资源分配单位与调度分派单位，限制了并发程度的进一步提高")]),_._v(" "),v("li",[_._v("进程“太重”，需要分割进程功能，引入线程")])])]),_._v(" "),v("li",[_._v("线程概念\n"),v("ul",[v("li",[_._v("线程是进程的一个实体，是独立调度和分派的基本单位")]),_._v(" "),v("li",[_._v("线程作为利用 CPU 的基本单位，是花费开销最小的实体")]),_._v(" "),v("li",[_._v("线程只包含运行所需的资源，即 CPU 资源，但它可以共享进程资源")])])]),_._v(" "),v("li",[_._v("线程的分类：用户级线程、内核级线程")]),_._v(" "),v("li",[_._v("内核级线程和用户级线程的比较")]),_._v(" "),v("li",[_._v("线程三种基本状态：就绪、运行、阻塞")]),_._v(" "),v("li",[_._v("线程控制块 TCB\n"),v("ul",[v("li",[_._v("TCB 的定义")]),_._v(" "),v("li",[_._v("TCB 包含的信息")]),_._v(" "),v("li",[_._v("线程组织方式：采用链接队列")])])]),_._v(" "),v("li",[_._v("线程与进程的关系\n"),v("ul",[v("li",[_._v("资源与调度：线程是程序执行的基本单位，进程是拥有资源的基本单位")]),_._v(" "),v("li",[_._v("地址空间资源\n"),v("ul",[v("li",[_._v("不同进程的地址空间独立")]),_._v(" "),v("li",[_._v("同一进程的线程共享进程的地址空间")])])]),_._v(" "),v("li",[_._v("通信关系\n"),v("ul",[v("li",[_._v("进程之间用进程通信机制")]),_._v(" "),v("li",[_._v("同一进程的线程直接读写或共享全局变量")])])]),_._v(" "),v("li",[_._v("并发性：多进程之间、多线程之间、同一进程多线程之间，都可并发")]),_._v(" "),v("li",[_._v("系统开销：线程开销更小")])])])])]),_._v(" "),v("li",[v("p",[_._v("线程的控制")]),_._v(" "),v("ul",[v("li",[_._v("创建于终止")]),_._v(" "),v("li",[_._v("调度与切换，调度可以为一个进程的多个内核线程分配多个 CPU")]),_._v(" "),v("li",[_._v("阻塞与唤醒")])])]),_._v(" "),v("li",[v("p",[_._v("线程的同步")]),_._v(" "),v("ul",[v("li",[_._v("类似进程，有原语操作、信号量机制")])])]),_._v(" "),v("li",[v("p",[_._v("线程通信")]),_._v(" "),v("ul",[v("li",[_._v("同一进程的线程之间，直接用全局变量通信")]),_._v(" "),v("li",[_._v("不同进程的线程之间，使用操作系统提供的线程通信机制")])])])]),_._v(" "),v("h2",{attrs:{id:"思考与练习题"}},[v("a",{staticClass:"header-anchor",attrs:{href:"#思考与练习题"}},[_._v("#")]),_._v(" 思考与练习题")]),_._v(" "),v("ul",[v("li",[_._v("选择题")])]),_._v(" "),v("ol",[v("li",[_._v("操作系统提供给应用程序的接口是"),v("code"),_._v("。")]),_._v(" "),v("li",[_._v("wait(s)操作中的 block(s.L)阻塞的进程是"),v("code"),_._v("。")]),_._v(" "),v("li",[_._v("在一个单处理系统中存在 5 个进程，处于就绪队列中的就绪进程数最多为"),v("code"),_._v("。")]),_._v(" "),v("li",[_._v("若记录型信号量的 wait(s)和 signal(s)操作的信号量 s 初值为 2，当前值为-1，则在 s 的阻塞队列中处于阻塞态的进程数为"),v("code"),_._v("。")])]),_._v(" "),v("ul",[v("li",[_._v("填空题")])]),_._v(" "),v("ol",[v("li",[_._v("进程是由正文段、"),v("code"),_._v("和"),v("code"),_._v("构成的实体。")]),_._v(" "),v("li",[_._v("进程的 3 种基本状态是执行态、"),v("code"),_._v("和"),v("code"),_._v("。")]),_._v(" "),v("li",[_._v("整型信号量的值只能被"),v("code"),_._v("和"),v("code"),_._v("改变，不允许系统中的其他程序改变信号量的值。")]),_._v(" "),v("li",[_._v("临界区是指访问"),v("code"),_._v("的代码。")])]),_._v(" "),v("ul",[v("li",[_._v("简答题")])]),_._v(" "),v("ol",[v("li",[_._v("什么是进程？说明进程与程序的区别和联系。")]),_._v(" "),v("li",[_._v("操作系统在什么时候创建进程？操作系统如何创建一个进程？")]),_._v(" "),v("li",[_._v("时钟中断信号是如何产生的？时钟中断处理程序（时钟驱动程序）的功能是什么？")]),_._v(" "),v("li",[_._v("请说明单重中断的处理过程。")]),_._v(" "),v("li",[_._v("进程具有哪些特征？")]),_._v(" "),v("li",[_._v("什么是线程？为什么要引入线程？")]),_._v(" "),v("li",[_._v("实现进程互斥的基本原理是什么？")])]),_._v(" "),v("ul",[v("li",[_._v("综合应用")])]),_._v(" "),v("ol",[v("li",[_._v("有两个进程 pA、pB 合作解决文件打印问题：pA 将文件记录从磁盘读入主存的缓存区，每执行一次读一个记录；pB 将缓冲区的内容打印出来，每执行一次打印一个记录。缓冲区的大小等于一个记录大小。请用记录型信号量机制的 wait(s)和 signal(s)操作来保证文件的正确打印，并写出同步代码。")])]),_._v(" "),v("h2",{attrs:{id:"百日题库-简答题"}},[v("a",{staticClass:"header-anchor",attrs:{href:"#百日题库-简答题"}},[_._v("#")]),_._v(" 百日题库-简答题")]),_._v(" "),v("ul",[v("li",[v("p",[_._v("【2018 年 4 月】相比于进程，请简述线程在地址空间资源、通信关系、并发性及系统开销方面有哪些特点？")]),_._v(" "),v("ul",[v("li",[_._v("（1）地址空间资源上，不同进程的地址空间是互相独立的，而同一进程中的各线程共享同地址空间。\n（2）通信关系上，进程之间的通信必须使用操作系统提供的进程间通信机制，而同一进程中的各线程间可以通过直接读写全局变量来通信。\n（3）在并发性上，多个进程和多个进程之间均可并发执行，而同一进程中多个线程之间可以并发执行。\n（4）在系统开销上，相比进程而言，线程在创建、撤销及上下文切换时系统开销很小，且速度更快。")])])]),_._v(" "),v("li",[v("p",[_._v("【2018 年 10 月】何为系统调用？请简述系统调用与一般函数调用的区别。")]),_._v(" "),v("ul",[v("li",[_._v("系统调用是一组预先定义好的模块，是系统程序与用户程序之间的接口，通过该接口可以得到操作系统内核（或核心程序）的服务。\n系统调用与一般函数调用的区别如下：\n（1）系统调用运行在系统态，而一般函数调用运行在用户态。\n（2）系统调用与一般函数调用的执行过程不同。系统调用执行时，当前进程被中断，由系统找相应的系统调用子程序，并在系统态下执行，执行结果返回调用进程。\n（3）系统调用要进行中断处理，比一般函数调用的系统开销要大。")])])]),_._v(" "),v("li",[v("p",[_._v("【2019 年 4 月】有两个并发进程 P1、P2，其程序代码如下："),v("br"),_._v(" "),v("img",{attrs:{src:"https://sdjrzk-1251357229.cos.ap-guangzhou.myqcloud.com/exam/paper/607/images/4781.png",alt:"image"}}),v("br"),_._v("\n如果上述每行代码都具有原子性，请写出打印出的 z 和 c 所有可能的值。（其中 x 为 P1、P2 的共享变量）")]),_._v(" "),v("ul",[v("li",[_._v("z 的值为-1 或 3；c 的值为 1 或 9。")])])]),_._v(" "),v("li",[v("p",[_._v("【2019 年 10 月】简述同步机制应遵循的原则。")]),_._v(" "),v("ul",[v("li",[_._v("准则包括：空闲让进、忙则等待、有限等待和让权等待")])])]),_._v(" "),v("li",[v("p",[_._v("【2020 年 8 月】请简述内核级线程与用户级线程在线程调度、切换速度、系统调用、执行时间分配四个方面的区别。")]),_._v(" "),v("ul",[v("li",[_._v("（1）线程调度上：内核级线程的调度由内核的线程调度程序完成，用户级线程的调度则由用户线程包中一个过程来完成。\n（2）切换速度上：内核级线程切换慢，用户级线程切换快。\n（3）系统调用上：内核级线程进行系统调用，只阻塞该线程。用户级线程的系统调用，要阻塞线程所属的进程。\n（4）执行时间分配上：内核级线程的 CPU 时间以线程为单位分配，每一个线程都可以独享一个 CPU 时间片。用户级线程的 CPU 时间以进程为单位，同一个进程的多个线程共享一个 CPU 时间片。")])])]),_._v(" "),v("li",[v("p",[_._v("【2020 年 10 月】列出线程控制的四项基本操作功能。")]),_._v(" "),v("ul",[v("li",[_._v("线程创建、线程的终止、线程的调度与切换、线程的阻塞与唤醒。")])])]),_._v(" "),v("li",[v("p",[_._v("【2021 年 4 月】从系统开销的角度论述线程与进程在创建或撤销、上下文切换时的处理区别。")]),_._v(" "),v("ul",[v("li",[_._v("创建或撤消进程时，系统都要为之分配或者回收资源，其开销远大于创建或撤销线程时的开销。进程上下文切换时，需要保存当前进程的所有 CPU 环境，并设置新进程的 CPU 环境；而线程下文切换时，只需要保存和设置几个寄存器内容，开销很小。同一进程内的线程共享进程的地址空间，切换更快。")])])]),_._v(" "),v("li",[v("p",[_._v("【2021 年 10 月】除了 I/O 设备被启动时会引起中断之外，还有哪四种原因会引起中断？")]),_._v(" "),v("ul",[v("li",[_._v("（1）人为设置中断；（2）程序性事故；（3）硬件故障；（4）外部事件。")])])]),_._v(" "),v("li",[v("p",[_._v("【2022 年 4 月】程序的并发执行，有哪三个特点？为了对共享资源进行管理，操作系统引入了什么机制？")]),_._v(" "),v("ul",[v("li",[_._v("（1）间断性，失去封闭性，不可再现性。（2）引入了信号量机制。")])])])])])}),[],!1,null,null,null);v.default=u.exports}}]);