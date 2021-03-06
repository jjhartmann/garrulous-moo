# -*- coding: utf-8 -*-
# Deployment settings for Stage1.
# This file is autogenerated by the mkb system and used by the s3e deployment
# tool during the build process.

config = {}
cmdline = ['C:/Marmalade/7.10/s3e/makefile_builder/mkb.py', 'd:/Marmalade/Stage1/Stage1.mkb', '--buildenv=VC14', '--fake-vc-call', '--deploy-only']
mkb = 'd:/Marmalade/Stage1/Stage1.mkb'
mkf = ['c:\\marmalade\\7.10\\s3e\\s3e-default.mkf', 'c:\\marmalade\\7.10\\extensions\\s3eamazonads\\s3eamazonads.mkf', 'c:\\marmalade\\7.10\\modules\\iwutil\\iwutil.mkf', 'c:\\marmalade\\7.10\\modules\\third_party\\libjpeg\\libjpeg.mkf', 'c:\\marmalade\\7.10\\modules\\third_party\\libpng\\libpng.mkf', 'c:\\marmalade\\7.10\\modules\\third_party\\zlib\\zlib.mkf', 'c:\\marmalade\\7.10\\platform_libs\\android\\amazon-ads-android-sdk\\amazon-ads-android-sdk.mkf', 'c:\\marmalade\\7.10\\platform_libs\\iphone\\amazon-ads-ios-sdk\\amazon-ads-ios-sdk.mkf', 'c:\\marmalade\\7.10\\modules\\iw2d\\iw2d.mkf', 'c:\\marmalade\\7.10\\modules\\iwgx\\iwgx.mkf', 'c:\\marmalade\\7.10\\modules\\iwgl\\iwgl.mkf', 'c:\\marmalade\\7.10\\modules\\iwgeom\\iwgeom.mkf', 'c:\\marmalade\\7.10\\modules\\iwresmanager\\iwresmanager.mkf', 'c:\\marmalade\\7.10\\extensions\\pvrtextool\\pvrtextool.mkf', 'c:\\marmalade\\7.10\\modules\\iwgxfont\\iwgxfont.mkf', 'c:\\marmalade\\7.10\\modules\\third_party\\tiniconv\\tiniconv.mkf', 'c:\\marmalade\\7.10\\modules\\iw2dscenegraph\\iw2dscenegraph.mkf', 'c:\\marmalade\\7.10\\modules\\iw2dscenegraphcore\\iw2dscenegraphcore.mkf', 'd:\\marmalade\\modules\\soundengine\\soundengine.mkf']

class DeployConfig(object):
    pass

######### ASSET GROUPS #############

assets = {}

assets['Default'] = [
    ('d:/Marmalade/Stage1/data/textures', 'textures', 0),
    ('d:/Marmalade/Stage1/data/audio', 'audio', 0),
]

######### DEFAULT CONFIG #############

class DefaultConfig(DeployConfig):
    embed_icf = -1
    name = 'Stage1'
    pub_sign_key = 0
    priv_sign_key = 0
    caption = 'Stage1'
    long_caption = 'Stage1'
    version = [0, 0, 1]
    config = ['d:/Marmalade/Stage1/data/app.icf']
    data_dir = 'd:/Marmalade/Stage1/data'
    mkb_dir = 'd:/Marmalade/Stage1'
    iphone_link_lib = ['s3eAmazonAds']
    osx_ext_dll = ['c:/marmalade/7.10/extensions/pvrtextool/lib/osx/libPVRTexTool.dylib']
    wp81_extra_pri = []
    ws8_ext_capabilities = []
    ws8_ext_native_only_dll = []
    win10_ext_uap_capabilities = []
    win10_ext_native_dll = []
    ws81_ext_native_only_dll = []
    android_external_res = []
    win32_ext_dll = ['c:/marmalade/7.10/extensions/pvrtextool/lib/win32/PVRTexTool.dll']
    win10_ext_sdk_ref = []
    wp8_ext_capabilities = []
    ws8_extra_res = []
    ws81_ext_managed_dll = []
    iphone_link_libdir = ['c:/marmalade/7.10/extensions/s3eamazonads/lib/iphone']
    android_extra_application_manifest = ['c:/marmalade/7.10/extensions/s3eamazonads/source/android/ExtraAppManifests.xml']
    win10_extra_res = []
    ws8_ext_native_dll = []
    android_external_assets = []
    blackberry_extra_descriptor = []
    android_ext_target_sdk_version = [17]
    android_extra_manifest = []
    wp81_ext_sdk_ref = []
    iphone_link_libdirs = []
    wp81_ext_device_capabilities = []
    win10_ext_capabilities = []
    linux_ext_lib = []
    android_ext_min_sdk_version = [4]
    wp81_ext_native_only_dll = []
    ws8_ext_managed_dll = []
    ws8_ext_sdk_manifest_part = []
    ws8_ext_device_capabilities = []
    ws81_extra_pri = []
    android_external_jars = ['c:/marmalade/7.10/platform_libs/android/amazon-ads-android-sdk/third_party/lib/amazon-ads-5.5.149.jar', 'c:/marmalade/7.10/extensions/s3eamazonads/lib/android/s3eAmazonAds.jar']
    win8_winrt_extra_res = []
    wp81_ext_sdk_manifest_part = []
    wp81_extra_res = []
    wp81_ext_managed_dll = []
    wp81_ext_capabilities = []
    win10_ext_managed_dll = []
    iphone_extra_plist = []
    ws81_ext_sdk_manifest_part = []
    ws81_ext_device_capabilities = []
    android_supports_gl_texture = []
    ws8_ext_sdk_ref = []
    iphone_extra_string = []
    tizen_so = []
    wp8_ext_native_dll = []
    win10_ext_sdk_manifest_part = []
    win10_extra_pri = []
    win10_ext_device_capabilities = []
    win8_phone_extra_res = []
    win32_aux_dll = []
    win8_store_extra_res = []
    iphone_link_opts = ['-Fc:/marmalade/7.10/platform_libs/iphone/amazon-ads-ios-sdk/third_party/Ads -framework AmazonAd', '-weak_framework AdSupport -weak_framework CoreLocation -weak_framework SystemConfiguration', '-weak_framework CoreTelephony -weak_framework MediaPlayer', '-weak_framework EventKit -weak_framework EventKitUI']
    ws81_ext_sdk_ref = []
    wp8_extra_res = []
    ws81_ext_native_dll = []
    ws8_extra_pri = []
    wp8_ext_managed_dll = []
    android_extra_packages = []
    android_so = ['c:/marmalade/7.10/extensions/s3eamazonads/lib/android/libs3eAmazonAds.so']
    wp8_ext_sdk_ref = []
    osx_extra_res = []
    ws81_extra_res = []
    wp81_ext_native_dll = []
    ws81_ext_capabilities = []
    iphone_link_libs = []
    android_extra_strings = []
    target = {
         'mips' : {
                   'debug'   : r'd:/Marmalade/Stage1/build_stage1_vc14/Debug_Stage1_VC14_gcc_mips/Stage1.so',
                   'release' : r'd:/Marmalade/Stage1/build_stage1_vc14/Release_Stage1_VC14_gcc_mips/Stage1.so',
                 },
         'gcc_x86' : {
                   'debug'   : r'd:/Marmalade/Stage1/build_stage1_vc14/Debug_Stage1_VC14_gcc_x86/Stage1.so',
                   'release' : r'd:/Marmalade/Stage1/build_stage1_vc14/Release_Stage1_VC14_gcc_x86/Stage1.so',
                 },
         'gcc_x86_tizen' : {
                   'debug'   : r'd:/Marmalade/Stage1/build_stage1_vc14/Debug_Stage1_VC14_gcc_x86_tizen/Stage1.s86',
                   'release' : r'd:/Marmalade/Stage1/build_stage1_vc14/Release_Stage1_VC14_gcc_x86_tizen/Stage1.s86',
                 },
         'mips_gcc' : {
                   'debug'   : r'd:/Marmalade/Stage1/build_stage1_vc14/Debug_Stage1_VC14_gcc_mips/Stage1.so',
                   'release' : r'd:/Marmalade/Stage1/build_stage1_vc14/Release_Stage1_VC14_gcc_mips/Stage1.so',
                 },
         'firefoxos' : {
                   'debug'   : r'd:/Marmalade/Stage1/build_stage1_vc14/Debug_Stage1_VC14_firefoxos/Stage1.js',
                   'release' : r'd:/Marmalade/Stage1/build_stage1_vc14/Release_Stage1_VC14_firefoxos/Stage1.js',
                 },
         'gcc_arm_android' : {
                   'debug'   : r'd:/Marmalade/Stage1/build_stage1_vc14/Debug_Stage1_VC14_gcc_arm_android/Stage1.so',
                   'release' : r'd:/Marmalade/Stage1/build_stage1_vc14/Release_Stage1_VC14_gcc_arm_android/Stage1.so',
                 },
         'arm_gcc' : {
                   'debug'   : r'd:/Marmalade/Stage1/build_stage1_vc14/Debug_Stage1_VC14_gcc_arm/Stage1.s3e',
                   'release' : r'd:/Marmalade/Stage1/build_stage1_vc14/Release_Stage1_VC14_gcc_arm/Stage1.s3e',
                 },
         'naclx86_64' : {
                   'debug'   : r'd:/Marmalade/Stage1/build_stage1_vc14/Debug_Stage1_VC14_gcc_naclx86_64/Stage1.so.s64',
                   'release' : r'd:/Marmalade/Stage1/build_stage1_vc14/Release_Stage1_VC14_gcc_naclx86_64/Stage1.so.s64',
                 },
         'aarch64_gcc' : {
                   'debug'   : r'd:/Marmalade/Stage1/build_stage1_vc14/Debug_Stage1_VC14_gcc_aarch64/Stage1.s3e',
                   'release' : r'd:/Marmalade/Stage1/build_stage1_vc14/Release_Stage1_VC14_gcc_aarch64/Stage1.s3e',
                 },
         'gcc_x86_android' : {
                   'debug'   : r'd:/Marmalade/Stage1/build_stage1_vc14/Debug_Stage1_VC14_gcc_x86_android/Stage1.so',
                   'release' : r'd:/Marmalade/Stage1/build_stage1_vc14/Release_Stage1_VC14_gcc_x86_android/Stage1.so',
                 },
         'arm' : {
                   'debug'   : r'd:/Marmalade/Stage1/build_stage1_vc14/Debug_Stage1_VC14_arm/Stage1.s3e',
                   'release' : r'd:/Marmalade/Stage1/build_stage1_vc14/Release_Stage1_VC14_arm/Stage1.s3e',
                 },
         'x86' : {
                   'debug'   : r'd:/Marmalade/Stage1/build_stage1_vc14/Debug_Stage1_VC14_x86/Stage1.s86',
                   'release' : r'd:/Marmalade/Stage1/build_stage1_vc14/Release_Stage1_VC14_x86/Stage1.s86',
                 },
        }
    arm_arch = ''
    assets_original = assets
    assets = assets['Default']

default = DefaultConfig()
