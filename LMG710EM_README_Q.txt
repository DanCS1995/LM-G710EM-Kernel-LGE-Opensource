1. Android build
  - Download original android source code ( android-10.0.0_r20 ) from http://source.android.com
  ( $repo init -u https://android.googlesource.com/platform/manifest -b android-10.0.0_r20
    $repo sync -cdq -j12 --no-tags
    $repo start android-10.0.0_r20 --all
  )
	   
  - Then, merge the source into the android source code
  - Run following scripts to build android
    a) source build/envsetup.sh
    b) lunch 1                                        
    c) make -j4
	
	
  - When you compile the android source code, you have to add google original prebuilt source(toolchain) into the android directory.
  - After build, you can find output at out/target/product/generic

2. Kernel Build  
  - Uncompress using following command at the android directory

    a) tar -xvzf *_Kernel_Q.tar.gz

  - When you compile the kernel source code, you have to add google original "prebuilt" source(toolchain) into the android directory.
  - Run following scripts to build kernel
  
    a) cd kernel/msm-4.9
    b) mkdir -p out
    c) export CLANG_TRIPLE=aarch64-linux-gnu-
    d) export CROSS_COMPILE=../../../prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/aarch64-linux-androidkernel-
    e) make ARCH=arm64 O=./out judypn_lao_com-perf_defconfig
    f) make ARCH=arm64 O=./out REAL_CC=../../../prebuilts/clang/host/linux-x86/clang-r349610/bin/clang KERNEL_COMPRESSION_SUFFIX=gz -j16

	* "-j16" : The number, 16, is the number of multiple jobs to be invoked simultaneously.
    - After build, you can find the build image(Image) at kernel/msm-4.9/out/arch/arm64/boot

 