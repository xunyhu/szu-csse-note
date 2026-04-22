export default {
  title: "HuRui's Note",
  description: "HuRui 的计算机与前端知识库，沉淀基础理论与工程实践",

  head: [
    ["meta", { name: "theme-color", content: "#3eaf7c" }],
    ["meta", { name: "apple-mobile-web-app-capable", content: "yes" }],
    ["meta", { name: "apple-mobile-web-app-status-bar-style", content: "black" }],
    ["link", { rel: "icon", href: "https://xunyhu.github.io/image/favicon.ico" }],
  ],

  themeConfig: {
    nav: [
      { text: "首页", link: "/" },
    ],

    sidebar: {
      "/szu/pest3/": [
        { text: "PEST-3", items: [{ text: "课程简介", link: "/szu/pest3/" }] },
      ],
      "/szu/c++/": [
        {
          text: "《C++程序设计》",
          items: [
            { text: "章节简要笔记", link: "/szu/c++/" },
            { text: "课程简介", link: "/szu/c++/introduce" },
            { text: "课后填空题", link: "/szu/c++/fill-blank" },
          ],
        },
      ],
      "/szu/structure/": [
        {
          text: "《数据结构导论》",
          items: [
            { text: "课程简介", link: "/szu/structure/" },
            { text: "第1章 概论", link: "/szu/structure/chapter-1" },
            { text: "第2章 线性表", link: "/szu/structure/chapter-2" },
            { text: "第3章 栈、队列和数组", link: "/szu/structure/chapter-3" },
            { text: "第4章 树", link: "/szu/structure/chapter-4" },
            { text: "第5章 图", link: "/szu/structure/chapter-5" },
            { text: "第6章 查找", link: "/szu/structure/chapter-6" },
            { text: "第7章 排序", link: "/szu/structure/chapter-7" },
          ],
        },
      ],
      "/szu/os/": [
        {
          text: "《操作系统概论》",
          items: [
            { text: "课程简介", link: "/szu/os/" },
            { text: "第1章 操作系统简介", link: "/szu/os/chapter-1" },
            { text: "第2章 进程管理", link: "/szu/os/chapter-2" },
          ],
        },
      ],
      "/szu/software/": [
        {
          text: "《软件开发工具》",
          items: [
            { text: "课程简介", link: "/szu/software/" },
            { text: "第1章 绪论", link: "/szu/software/chapter-1" },
          ],
        },
      ],
      "/szu/database/": [
        {
          text: "《数据库系统原理》",
          items: [{ text: "课程简介", link: "/szu/database/" }],
        },
      ],
      "/szu/network/": [
        {
          text: "《计算机网络原理》",
          items: [
            { text: "课程简介", link: "/szu/network/" },
            { text: "第1章 网络概述", link: "/szu/network/chapter-1" },
            { text: "第2章 网络应用", link: "/szu/network/chapter-2" },
            { text: "第3章 传输层", link: "/szu/network/chapter-3" },
            { text: "第4章 网络层", link: "/szu/network/chapter-4" },
            { text: "第5章 数据链路层与局域网", link: "/szu/network/chapter-5" },
            { text: "第6章 物理层", link: "/szu/network/chapter-6" },
            { text: "第7章 无线与移动网络", link: "/szu/network/chapter-7" },
            { text: "第8章 网络安全基础", link: "/szu/network/chapter-8" },
          ],
        },
      ],
      "/szu/history/": [
        {
          text: "《中国近现代史纲要》",
          items: [
            { text: "章节简要笔记", link: "/szu/history/" },
            { text: "课程简介", link: "/szu/history/introduce" },
            { text: "简答题", link: "/szu/history/subjective" },
          ],
        },
      ],
      "/szu/marx/": [
        {
          text: "《马克思主义基本原理概论》",
          items: [
            { text: "课程简介", link: "/szu/marx/" },
            { text: "绪论", link: "/szu/marx/chapter-0" },
            { text: "第1章 物质世界及其发展规律", link: "/szu/marx/chapter-1" },
            { text: "第2章 认识的本质及其规律", link: "/szu/marx/chapter-2" },
            { text: "第3章 人类社会及其发展规律", link: "/szu/marx/chapter-3" },
            { text: "第4章 资本主义制度的形成及其本质", link: "/szu/marx/chapter-4" },
            { text: "第5章 资本主义的发展及其规律", link: "/szu/marx/chapter-5" },
            { text: "第6章 社会主义的发展及其规律", link: "/szu/marx/chapter-6" },
            { text: "第7章 共产主义社会是人类最崇高的社会理想", link: "/szu/marx/chapter-7" },
            { text: "主观题", link: "/szu/marx/subjective" },
          ],
        },
      ],
      "/szu/business/": [
        {
          text: "《网络经济与企业管理》",
          items: [
            { text: "课程简介", link: "/szu/business/" },
            { text: "第一章 企业管理概论", link: "/szu/business/chapter-1" },
            { text: "第二章 企业战略管理", link: "/szu/business/chapter-2" },
            { text: "第三章 客户关系管理", link: "/szu/business/chapter-3" },
            { text: "第四章 企业组织管理", link: "/szu/business/chapter-4" },
            { text: "第五章 市场营销管理", link: "/szu/business/chapter-5" },
            { text: "第六章 企业运作管理", link: "/szu/business/chapter-6" },
            { text: "第七章 企业财务管理", link: "/szu/business/chapter-7" },
            { text: "第八章 人力资源管理", link: "/szu/business/chapter-8" },
            { text: "第九章 企业知识管理", link: "/szu/business/chapter-9" },
            { text: "第十章 供应链管理", link: "/szu/business/chapter-10" },
            { text: "第十一章 企业文化管理", link: "/szu/business/chapter-11" },
            { text: "主观题-真题", link: "/szu/business/subjective" },
          ],
        },
      ],
    },
  },
};