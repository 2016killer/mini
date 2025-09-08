# mini


## 要求
- Windows 10/11 64位系统
- Visual Studio 2019
- Premake5
- Git
- Garry's Mod

## 安装步骤

1. 递归克隆本仓库（包含子模块）：


该项目使用`garrysmod_common`的x86-64支持分支：
https://github.com/danielga/garrysmod_common/tree/x86-64-support-sourcesdk

## 构建与安装模块

1. 使用Premake5生成Visual Studio 2019项目：

```bash
premake5 vs2019
```

2. 生成并自动安装到GMod目录（推荐）：

```bash
premake5 vs2019 --autoinstall="C:/Program Files (x86)/Steam/steamapps/common/GarrysMod/garrysmod/lua/bin"
```

将路径替换为实际的GarrysMod安装路径。

3. 打开生成的解决方案文件（`mini.sln`）

4. 在Visual Studio中，选择`Release`配置和`x64`平台

5. 点击"生成解决方案"（Build Solution）

## 验证模块

1. 启动Garry's Mod

2. 打开控制台（按`~`）

3. 模块加载信息"加载成功! Hello World!"

## 扩展与定制

根据开发需求，可以修改以下文件：

1. **premake5.lua**：
   - 添加或移除依赖库
   - 修改编译选项
   - 调整输出文件名
   - 添加额外的包含目录或库目录

2. **src/main.cpp**：
   - 修改模块初始化逻辑
   - 添加新的Lua绑定
   - 实现自定义功能

3. 如需添加新文件，只需将其放入`src`目录，并确保在premake5.lua中正确配置文件路径。