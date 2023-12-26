#pragma once
#include <stdio.h>
#include <iostream>

void grab_hardware() {
    system("getprop ro.hardware");
} 

void grab_bootloader() {
    system("getprop ro.boot.bootloader");
}

void grab_brand() {
    system("getprop ro.product.manufacturer");
}

void grab_model() {
    system("getprop ro.product.model");
}

void grab_device() {
    system("getprop ro.product.name");
}

void grab_arch_platform() {
    system("getprop ro.board.platform");
}

void grab_abi () {
    system("getprop ro.system.product.cpu.abilist");
}

void check_dynamic() {
    system("getprop ro.boot.dynamic_partitions");
}

void android_rel() {
    system("getprop ro.build.version.release");
}

void android_sdk() {
    system("getprop ro.build.version.sdk");
}

void build_id() {
    system("getprop ro.build.id");
}

//#define SPRITE "cat components/artboard/art.sprite"

#define SPRITE_PROD "cat /system/recovery/art.sprite"

void version_id() {
    std::cout << "Galaxy A12s" ;
}

void twrp_version() {
    std::cout << "Placeholder Version";
}

