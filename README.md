# 双目深度估计SDK

本项目是一个基于C++和TensorRT的双目深度估计SDK，运行平台为NVIDIA Jetson Orin平台。

## 依赖

- **JetPack 6.1+**: 
  - **CUDA 12.6**
  - **TensorRT 10.3** 
  - **OpenCV 4.8+** 
- **C++17** 编译器 (g++)
- **CMake 3.16+**

## 文件结构

```
sDepth/
├── CMakeLists.txt
├── README.md
├── config/
│   ├── stereo_calibration.json
│   └── stereodepth.enc
├── include/
│   ├── opencv4/
│   ├── SG_StereoDepth_api.h
│   └── SG_StereoDepth_def.h
│── lib/
│   ├── opencv/
│   └── libsDepth.so
│── picture/
│   ├── left0000.png
│   └── right0000.png
│
└── samples/
    └── main.cpp

```

## 快速开始

### 1. 安装系统依赖

```bash
sudo apt update
sudo apt install cmake build-essential
```

### 2. 手动构建

   ```bash
   cd sDepth
   mkdir build
   cd build
   cmake ..
   make -j$(nproc)
   ```

## 编译输出

在 `sDepth/build` 目录下生成可执行程序：

```bash
demo 
```

## 运行示例

```bash
./demo <keyfile_name>
```

- **`<keyfile_name>`**: 模型Licens文件，请联系业务获取（业务邮箱：`<qah@sensing-world.com>`）


