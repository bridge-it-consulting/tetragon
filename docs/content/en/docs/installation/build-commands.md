---
title: "Build Commands"
weight: 7
description: "Reference for building Tetragon on different architectures"
---

## Building Tetragon for Different Architectures

Tetragon supports building for multiple architectures:

- x86_64/amd64 (64-bit Intel/AMD)
- arm64/aarch64 (64-bit ARM)
- armv7l/arm (32-bit ARM)

### Architecture Detection

The build system automatically detects the host architecture using `uname -m` and sets the appropriate `TARGET_ARCH` value:

- `x86_64` → `TARGET_ARCH=amd64`
- `aarch64` or `arm64` → `TARGET_ARCH=arm64`
- `armv7l` or `arm` → `TARGET_ARCH=arm`

### Cross-Compilation

You can override the target architecture by explicitly setting `TARGET_ARCH`:

```shell
# Build for 64-bit ARM
make TARGET_ARCH=arm64

# Build for 32-bit ARM
make TARGET_ARCH=arm

# Build for 64-bit x86
make TARGET_ARCH=amd64
```

### BPF Target Architecture

The build system maps `TARGET_ARCH` to the appropriate `BPF_TARGET_ARCH` for BPF program compilation:

- `TARGET_ARCH=amd64` → `BPF_TARGET_ARCH=x86`
- `TARGET_ARCH=arm64` → `BPF_TARGET_ARCH=arm64`
- `TARGET_ARCH=arm` → `BPF_TARGET_ARCH=arm`

### Building for 32-bit ARM (armv7/arm32)

To build Tetragon for 32-bit ARM architecture:

```shell
# Build all components for 32-bit ARM
make TARGET_ARCH=arm

# Build specific components for 32-bit ARM
make TARGET_ARCH=arm tetragon tetragon-bpf tetra
```

When cross-compiling for 32-bit ARM, you may need to set additional Go build flags:

```shell
# Cross-compile for ARMv7 from a different architecture
GOOS=linux GOARCH=arm GOARM=7 make TARGET_ARCH=arm
```

### Building Container Images for Different Architectures

To build container images for specific architectures:

```shell
# Build for 64-bit x86
make TARGET_ARCH=amd64 image

# Build for 64-bit ARM
make TARGET_ARCH=arm64 image

# Build for 32-bit ARM
make TARGET_ARCH=arm image
```

### Building Tarballs for Different Architectures

To build tarballs for specific architectures:

```shell
# Build for 64-bit x86
make TARGET_ARCH=amd64 tarball

# Build for 64-bit ARM
make TARGET_ARCH=arm64 tarball

# Build for 32-bit ARM
make TARGET_ARCH=arm tarball
```

The resulting tarball will be located at `build/$(TARGET_ARCH)/linux-tarball/tetragon-$(VERSION)-$(TARGET_ARCH).tar.gz`.