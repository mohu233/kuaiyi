# Kuaiyi  — 模拟量化交易客户端

这是一个基于 Qt（C++/Qt Widgets）的桌面客户端，模拟量化交易环境。功能与真实炒股软件类似（包含登录、下单、持仓、成交、资金与盈亏展示等），但所有交易均为虚拟模拟，不涉及真实资金。适合用于教学、策略回测演示或与后端模拟交易服务联调。

重要说明
- 本软件为模拟量化交易客户端，操作流程和界面与真实炒股软件相似，但所有交易均为虚拟，不涉及任何真实资金或真实证券账户。请勿将本软件用于真实资金交易。

主要功能
- 登录界面（LoginDialog）和授权密钥传递
- 主界面（MainWindow）：显示持仓、委托、成交、资金状况，并支持下单、平仓、撤单等交互
- 子窗口：号码管理（Number）、资金（Funds）、充值（Recharge）等功能界面
- 基于 QTcpSocket 的异步 TCP 通信（TcpClient），通过 dataReceived 信号把服务器数据分发到 UI
- 使用资源文件（.qrc）打包样式（style.qss）、图片和 ip 配置（ip.txt）

技术栈
- 语言：C++（C++17）
- 框架：Qt (Widgets + Network)
- 主要模块：QTcpSocket、QJsonDocument、Qt Designer (.ui) 表单

如何运行（最短路径）
1. 安装 Qt（含 qmake），推荐使用 Qt Creator：打开 `untitled.pro`。
2. 在仓库根目录或 Qt Creator 中构建项目：
   ```bash
   qmake untitled.pro
   make        # 或在 Windows 上用对应的 make 工具 / 在 Qt Creator 中运行构建
   ./untitled  # 或在 Qt Creator 中运行生成的可执行文件
   ```
3. 程序会从资源中的 `:/ip.txt` 读取服务器地址（格式：`host:port`），示例默认连接 `127.0.0.1:5555`。确保有对应的模拟交易后端在该地址监听，或修改资源/代码以连接你自己的服务。

配置与调试
- 修改服务器地址：编辑资源文件 `ip.txt`（resources.qrc 中包含），或在 `main.cpp` 中调整 `connectToServer` 的参数。
- 若样式或图片加载失败，请确认 `images.qrc` / `resources.qrc` 已包含对应资源并已编译进可执行文件。

开发说明
- 项目使用 qmake (.pro) 配置，若希望迁移到 CMake 可另行改造。
- 代码中大量使用中文注释和 UI 文本，便于本地化与快速理解。

贡献
欢迎提交 issue 或 pull request，说明你希望的功能（例如：策略回测、历史数据回放、可视化指标面板等）。
