s5p-fimc-objs := fimc-core.o fimc-reg.o fimc-m2m.o fimc-capture.o media-dev.o
exynos-fimc-lite-objs += fimc-lite-reg.o fimc-lite.o
s5p-csis-objs := mipi-csis.o
exynos4-is-common-objs := common.o

exynos-fimc-is-objs := fimc-is.o fimc-isp.o fimc-is-sensor.o fimc-is-regs.o
exynos-fimc-is-objs += fimc-is-param.o fimc-is-errno.o fimc-is-i2c.o

ifeq ($(CPTCFG_VIDEO_EXYNOS4_ISP_DMA_CAPTURE),y)
exynos-fimc-is-objs += fimc-isp-video.o
endif

obj-$(CPTCFG_VIDEO_S5P_MIPI_CSIS)	+= s5p-csis.o
obj-$(CPTCFG_VIDEO_EXYNOS_FIMC_LITE)	+= exynos-fimc-lite.o
obj-$(CPTCFG_VIDEO_EXYNOS4_FIMC_IS)	+= exynos-fimc-is.o
obj-$(CPTCFG_VIDEO_S5P_FIMC)		+= s5p-fimc.o
obj-$(CPTCFG_VIDEO_EXYNOS4_IS_COMMON)	+= exynos4-is-common.o
