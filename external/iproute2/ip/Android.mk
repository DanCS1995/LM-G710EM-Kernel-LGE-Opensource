LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_SRC_FILES := ip.c ipaddress.c ipaddrlabel.c iproute.c iprule.c ipnetns.c \
        rtm_map.c iptunnel.c ip6tunnel.c tunnel.c ipneigh.c ipntable.c iplink.c \
        ipmaddr.c ipmonitor.c ipmroute.c ipprefix.c iptuntap.c \
        ipxfrm.c xfrm_state.c xfrm_policy.c xfrm_monitor.c \
        iplink_vlan.c link_veth.c link_gre.c iplink_can.c \
        iplink_macvlan.c ipl2tp.c \
        ipfou.c iptoken.c tcp_metrics.c ipnetconf.c \
        iproute_lwtunnel.c

LOCAL_MODULE := ip

LOCAL_MODULE_TAGS := optional

LOCAL_SHARED_LIBRARIES := libc libm libdl

LOCAL_SHARED_LIBRARIES += libiprouteutil libnetlink

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../include

LOCAL_CFLAGS := \
    -O2 -g \
    -W -Wall \
    -Wno-implicit-function-declaration \
    -Wno-missing-field-initializers \
    -Wno-pointer-arith \
    -Wno-sign-compare \
    -Wno-unused-parameter \
    -Werror \
    -D_GNU_SOURCE \
    -DHAVE_SETNS \

# LGP_DATA_IP_RULE_UIDRANGE_BY_KERNEL
# All of OOS setting by https://android-review.googlesource.com/#/c/325305/
LOCAL_CFLAGS += -DKERNEL_VERSION_IPRULE


LOCAL_LDFLAGS := -Wl,-export-dynamic -Wl,--no-gc-sections

include $(BUILD_EXECUTABLE)