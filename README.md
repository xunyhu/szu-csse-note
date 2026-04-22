# HuRui 的知识库

这是一个基于 **VitePress** 搭建的个人知识库网站，按课程组织「计算机科学与技术」相关学习笔记与复习材料，目标是做到 **可展示、可持续扩展、可长期维护**。

## 内容结构

- **首页**：`index.md`
- **课程笔记**：`szu/`（按课程与章节组织）
- **站点配置**：`.vitepress/`

## 本地开发

```bash
npm run docs:dev
```

## 构建与预览

```bash
npm run docs:build
npm run docs:preview
```

## 技术栈

- **VitePress**（文档站点）
- **Vue 3 / @vue/server-renderer**（VitePress 运行所需）
