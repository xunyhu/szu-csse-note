const szuRoute = [
  {
    text: "PEST-3",
    link: "/szu/pest3/",
  },
  {
    text: "C++程序设计",
    link: "/szu/c++/",
  },
  {
    text: "数据结构导论",
    link: "/szu/structure/",
  },
  {
    text: "操作系统概论",
    link: "/szu/os/",
  },
  {
    text: "软件开发工具",
    link: "/szu/software/",
  },
  {
    text: "数据库系统原理",
    link: "/szu/database/",
  },
  {
    text: "计算机网络原理",
    link: "/szu/network/",
  },
  {
    text: "中国近现代史纲要",
    link: "/szu/history/",
  },
  {
    text: "马克思主义基本原理概论",
    link: "/szu/marx/",
  },
  {
    text: "网络经济与企业管理",
    link: "/szu/business/",
  },
];

const szuSidebar = {
  "/szu/c++/": [
    {
      title: "《C++程序设计》",
      collapsable: false,
      children: [
        ["", "章节简要笔记"],
        ["introduce", "课程简介"],
        ["fill-blank", "课后填空题"],
      ],
    },
  ],
  "/szu/business/": [
    {
      title: "《网络经济与企业管理》",
      collapsable: false,
      children: [
        ["", "课程简介"],
        ["chapter-1", "第一章 企业管理概论"],
        ["chapter-2", "第二章 企业战略管理"],
        ["chapter-3", "第三章 客户关系管理"],
        ["chapter-4", "第四章 企业组织管理"],
        ["chapter-5", "第五章 市场营销管理"],
        ["chapter-6", "第六章 企业运作管理"],
        ["chapter-7", "第七章 企业财务管理"],
        ["chapter-8", "第八章 人力资源管理"],
        ["chapter-9", "第九章 企业知识管理"],
        ["chapter-10", "第十章 供应链管理"],
        ["chapter-11", "第十一章 企业文化管理"],
        ["subjective", "主观题-真题"],
      ],
    },
  ],
  "/szu/marx/": [
    {
      title: "《马克思主义基本原理概论》",
      collapsable: false,
      children: [
        ["", "课程简介"],
        ["chapter-0", "绪论 马克思主义是关于无产阶级和人类解放的科学"],
        ["chapter-1", "第1章 物质世界及其发展规律"],
        ["chapter-2", "第2章 认识的本质及其规律"],
        ["chapter-3", "第3章 人类社会及其发展规律"],
        ["chapter-4", "第4章 资本主义制度的形成及其本质"],
        ["chapter-5", "第5章 资本主义的发展及其规律"],
        ["chapter-6", "第6章 社会主义的发展及其规律"],
        ["chapter-7", "第7章 共产主义社会是人类最崇高的社会理想"],
        ["subjective", "主观题"],
      ],
    },
  ],
  "/szu/network/": [
    {
      title: "《计算机网络原理》",
      collapsable: false,
      children: [
        ["", "课程简介"],
        ["chapter-1", "第1章 网络概述"],
        ["chapter-2", "第2章 网络应用"],
        ["chapter-3", "第3章 传输层"],
        ["chapter-4", "第4章 网络层"],
        ["chapter-5", "第5章 数据链路层与局域网"],
        ["chapter-6", "第6章 物理层"],
        ["chapter-7", "第7章 无线与移动网络"],
        ["chapter-8", "第8章 网络安全基础"],
      ],
    },
  ],
  "/szu/history/": [
    {
      title: "《中国近现代史纲要》",
      collapsable: false,
      children: [
        ["", "章节简要笔记"],
        ["introduce", "课程简介"],
        ["subjective", "简答题"],
      ],
    },
  ],
  "/szu/structure/": [
    {
      title: "《数据结构导论》",
      collapsable: false,
      children: [
        ["", "课程简介"],
        ["chapter-1", "第1章 概论"],
        ["chapter-2", "第2章 线性表"],
        ["chapter-3", "第3章 栈、队列和数组"],
      ],
    },
  ],
  "/szu/os/": [
    {
      title: "《操作系统概论》",
      collapsable: false,
      children: [
        ["", "课程简介"],
        ["chapter-1", "第1章 操作系统简介"],
        ["chapter-2", "第2章 进程管理"],
      ],
    },
  ],
  "/szu/database/": [
    {
      title: "《数据库系统原理》",
      collapsable: false,
      children: [
        ["", "课程简介"],
      ],
    },
  ],
  "/szu/software/": [
    {
      title: "《软件开发工具》",
      collapsable: false,
      children: [
        ["", "课程简介"],
      ],
    },
  ],
  "/szu/pest3/": [
    {
      title: "PEST-3",
      collapsable: false,
      children: [
        ''
      ],
    },
  ]
};

module.exports = { szuRoute, szuSidebar };
