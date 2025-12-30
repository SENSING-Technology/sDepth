# Binocular Depth Estimation SDK

This project is a binocular depth estimation SDK based on C++ and TensorRT, running on NVIDIA Jetson Orin platform.

## Dependencies

- **JetPack 6.1+**:
  - **CUDA 12.6**
  - **TensorRT 10.3** 
  - **OpenCV 4.8+** 
- **C++17** compiler (g++)
- **CMake 3.16+**

## File Structure

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

## Quick Start

### 1. Install System Dependencies

```bash
sudo apt update
sudo apt install cmake build-essential
```

### 2. Manual Build

   ```bash
   cd sDepth
   mkdir build
   cd build
   cmake ..
   make -j$(nproc)
   ```

## Compilation Output

The executable program is generated in the `sDepth/build` directory:

```bash
demo 
```

## Run Example

```bash
./demo <keyfile_name>
```

- **`<keyfile_name>`**: Model license file, please contact business for it (business email: `<qah@sensing-world.com>`)