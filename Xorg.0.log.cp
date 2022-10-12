[     7.458] (--) Log file renamed from "/var/log/Xorg.pid-627.log" to "/var/log/Xorg.0.log"
[     7.459] 
X.Org X Server 1.21.1.4
X Protocol Version 11, Revision 0
[     7.459] Current Operating System: Linux archlinux 5.19.13-arch1-1 #1 SMP PREEMPT_DYNAMIC Tue, 04 Oct 2022 14:36:58 +0000 x86_64
[     7.459] Kernel command line: BOOT_IMAGE=/vmlinuz-linux root=UUID=de262724-9e8e-4646-a890-24f7290c2cf7 rw loglevel=3 quiet
[     7.459]  
[     7.459] Current version of pixman: 0.40.0
[     7.459] 	Before reporting problems, check http://wiki.x.org
	to make sure that you have the latest version.
[     7.459] Markers: (--) probed, (**) from config file, (==) default setting,
	(++) from command line, (!!) notice, (II) informational,
	(WW) warning, (EE) error, (NI) not implemented, (??) unknown.
[     7.459] (==) Log file: "/var/log/Xorg.0.log", Time: Thu Oct 13 08:43:19 2022
[     7.461] (==) Using system config directory "/usr/share/X11/xorg.conf.d"
[     7.462] (==) No Layout section.  Using the first Screen section.
[     7.462] (==) No screen section available. Using defaults.
[     7.462] (**) |-->Screen "Default Screen Section" (0)
[     7.462] (**) |   |-->Monitor "<default monitor>"
[     7.462] (==) No monitor specified for screen "Default Screen Section".
	Using a default monitor configuration.
[     7.462] (==) Automatically adding devices
[     7.462] (==) Automatically enabling devices
[     7.462] (==) Automatically adding GPU devices
[     7.462] (==) Automatically binding GPU devices
[     7.462] (==) Max clients allowed: 256, resource mask: 0x1fffff
[     7.463] (WW) The directory "/usr/share/fonts/misc" does not exist.
[     7.463] 	Entry deleted from font path.
[     7.464] (WW) `fonts.dir' not found (or not valid) in "/usr/share/fonts/TTF".
[     7.464] 	Entry deleted from font path.
[     7.464] 	(Run 'mkfontdir' on "/usr/share/fonts/TTF").
[     7.465] (WW) `fonts.dir' not found (or not valid) in "/usr/share/fonts/OTF".
[     7.465] 	Entry deleted from font path.
[     7.465] 	(Run 'mkfontdir' on "/usr/share/fonts/OTF").
[     7.465] (WW) The directory "/usr/share/fonts/Type1" does not exist.
[     7.465] 	Entry deleted from font path.
[     7.465] (WW) The directory "/usr/share/fonts/100dpi" does not exist.
[     7.465] 	Entry deleted from font path.
[     7.465] (WW) The directory "/usr/share/fonts/75dpi" does not exist.
[     7.465] 	Entry deleted from font path.
[     7.465] (==) FontPath set to:
	
[     7.465] (==) ModulePath set to "/usr/lib/xorg/modules"
[     7.465] (II) The server relies on udev to provide the list of input devices.
	If no devices become available, reconfigure udev or disable AutoAddDevices.
[     7.465] (II) Module ABI versions:
[     7.465] 	X.Org ANSI C Emulation: 0.4
[     7.465] 	X.Org Video Driver: 25.2
[     7.465] 	X.Org XInput driver : 24.4
[     7.465] 	X.Org Server Extension : 10.0
[     7.465] (++) using VT number 1

[     7.465] (II) systemd-logind: logind integration requires -keeptty and -keeptty was not provided, disabling logind integration
[     7.466] (II) xfree86: Adding drm device (/dev/dri/card0)
[     7.466] (II) Platform probe for /sys/devices/pci0000:00/0000:00:03.1/0000:08:00.0/drm/card0
[     7.468] (**) OutputClass "nvidia" ModulePath extended to "/usr/lib/nvidia/xorg,/usr/lib/xorg/modules,/usr/lib/xorg/modules"
[     7.470] (--) PCI:*(8@0:0:0) 10de:2504:10de:2504 rev 161, Mem @ 0xf5000000/16777216, 0xe0000000/268435456, 0xf0000000/33554432, I/O @ 0x0000e000/128, BIOS @ 0x????????/524288
[     7.470] (WW) Open ACPI failed (/var/run/acpid.socket) (No such file or directory)
[     7.470] (II) LoadModule: "glx"
[     7.472] (II) Loading /usr/lib/xorg/modules/extensions/libglx.so
[     7.482] (II) Module glx: vendor="X.Org Foundation"
[     7.482] 	compiled for 1.21.1.4, module version = 1.0.0
[     7.482] 	ABI class: X.Org Server Extension, version 10.0
[     7.482] (II) Applying OutputClass "nvidia" to /dev/dri/card0
[     7.482] 	loading driver: nvidia
[     7.482] (==) Matched nvidia as autoconfigured driver 0
[     7.482] (==) Matched nouveau as autoconfigured driver 1
[     7.482] (==) Matched nv as autoconfigured driver 2
[     7.482] (==) Matched modesetting as autoconfigured driver 3
[     7.482] (==) Matched fbdev as autoconfigured driver 4
[     7.482] (==) Matched vesa as autoconfigured driver 5
[     7.482] (==) Assigned the driver to the xf86ConfigLayout
[     7.482] (II) LoadModule: "nvidia"
[     7.482] (II) Loading /usr/lib/xorg/modules/drivers/nvidia_drv.so
[     7.491] (II) Module nvidia: vendor="NVIDIA Corporation"
[     7.491] 	compiled for 1.6.99.901, module version = 1.0.0
[     7.491] 	Module class: X.Org Video Driver
[     7.491] (II) LoadModule: "nouveau"
[     7.492] (WW) Warning, couldn't open module nouveau
[     7.492] (EE) Failed to load module "nouveau" (module does not exist, 0)
[     7.492] (II) LoadModule: "nv"
[     7.492] (WW) Warning, couldn't open module nv
[     7.492] (EE) Failed to load module "nv" (module does not exist, 0)
[     7.492] (II) LoadModule: "modesetting"
[     7.492] (II) Loading /usr/lib/xorg/modules/drivers/modesetting_drv.so
[     7.495] (II) Module modesetting: vendor="X.Org Foundation"
[     7.495] 	compiled for 1.21.1.4, module version = 1.21.1
[     7.495] 	Module class: X.Org Video Driver
[     7.495] 	ABI class: X.Org Video Driver, version 25.2
[     7.495] (II) LoadModule: "fbdev"
[     7.495] (WW) Warning, couldn't open module fbdev
[     7.495] (EE) Failed to load module "fbdev" (module does not exist, 0)
[     7.495] (II) LoadModule: "vesa"
[     7.496] (WW) Warning, couldn't open module vesa
[     7.496] (EE) Failed to load module "vesa" (module does not exist, 0)
[     7.496] (II) NVIDIA dlloader X Driver  515.76  Mon Sep 12 19:18:09 UTC 2022
[     7.496] (II) NVIDIA Unified Driver for all Supported NVIDIA GPUs
[     7.496] (II) modesetting: Driver for Modesetting Kernel Drivers: kms
[     7.498] (II) Loading sub module "fb"
[     7.498] (II) LoadModule: "fb"
[     7.498] (II) Module "fb" already built-in
[     7.498] (II) Loading sub module "wfb"
[     7.498] (II) LoadModule: "wfb"
[     7.498] (II) Loading /usr/lib/xorg/modules/libwfb.so
[     7.499] (II) Module wfb: vendor="X.Org Foundation"
[     7.499] 	compiled for 1.21.1.4, module version = 1.0.0
[     7.499] 	ABI class: X.Org ANSI C Emulation, version 0.4
[     7.499] (II) Loading sub module "ramdac"
[     7.499] (II) LoadModule: "ramdac"
[     7.499] (II) Module "ramdac" already built-in
[     7.501] (WW) Falling back to old probe method for modesetting
[     7.501] (II) NVIDIA(0): Creating default Display subsection in Screen section
	"Default Screen Section" for depth/fbbpp 24/32
[     7.502] (==) NVIDIA(0): Depth 24, (==) framebuffer bpp 32
[     7.502] (==) NVIDIA(0): RGB weight 888
[     7.502] (==) NVIDIA(0): Default visual is TrueColor
[     7.502] (==) NVIDIA(0): Using gamma correction (1.0, 1.0, 1.0)
[     7.502] (II) Applying OutputClass "nvidia" options to /dev/dri/card0
[     7.502] (**) NVIDIA(0): Option "AllowEmptyInitialConfiguration"
[     7.502] (**) NVIDIA(0): Enabling 2D acceleration
[     7.502] (II) Loading sub module "glxserver_nvidia"
[     7.502] (II) LoadModule: "glxserver_nvidia"
[     7.502] (II) Loading /usr/lib/nvidia/xorg/libglxserver_nvidia.so
[     7.590] (II) Module glxserver_nvidia: vendor="NVIDIA Corporation"
[     7.590] 	compiled for 1.6.99.901, module version = 1.0.0
[     7.590] 	Module class: X.Org Server Extension
[     7.590] (II) NVIDIA GLX Module  515.76  Mon Sep 12 19:14:20 UTC 2022
[     7.592] (II) NVIDIA: The X server supports PRIME Render Offload.
[     8.707] (--) NVIDIA(0): Valid display device(s) on GPU-0 at PCI:8:0:0
[     8.707] (--) NVIDIA(0):     DFP-0 (boot)
[     8.707] (--) NVIDIA(0):     DFP-1
[     8.707] (--) NVIDIA(0):     DFP-2
[     8.707] (--) NVIDIA(0):     DFP-3
[     8.707] (--) NVIDIA(0):     DFP-4
[     8.707] (--) NVIDIA(0):     DFP-5
[     8.707] (--) NVIDIA(0):     DFP-6
[     8.708] (II) NVIDIA(0): NVIDIA GPU NVIDIA GeForce RTX 3060 (GA106-A) at PCI:8:0:0
[     8.708] (II) NVIDIA(0):     (GPU-0)
[     8.708] (--) NVIDIA(0): Memory: 12582912 kBytes
[     8.708] (--) NVIDIA(0): VideoBIOS: 94.06.2f.00.46
[     8.708] (II) NVIDIA(0): Detected PCI Express Link width: 16X
[     8.753] (--) NVIDIA(GPU-0): PTFWFE-24W (DFP-0): connected
[     8.753] (--) NVIDIA(GPU-0): PTFWFE-24W (DFP-0): Internal TMDS
[     8.753] (--) NVIDIA(GPU-0): PTFWFE-24W (DFP-0): 600.0 MHz maximum pixel clock
[     8.753] (--) NVIDIA(GPU-0): 
[     8.753] (--) NVIDIA(GPU-0): DFP-1: disconnected
[     8.753] (--) NVIDIA(GPU-0): DFP-1: Internal DisplayPort
[     8.753] (--) NVIDIA(GPU-0): DFP-1: 2670.0 MHz maximum pixel clock
[     8.753] (--) NVIDIA(GPU-0): 
[     8.753] (--) NVIDIA(GPU-0): DFP-2: disconnected
[     8.753] (--) NVIDIA(GPU-0): DFP-2: Internal TMDS
[     8.753] (--) NVIDIA(GPU-0): DFP-2: 165.0 MHz maximum pixel clock
[     8.753] (--) NVIDIA(GPU-0): 
[     8.753] (--) NVIDIA(GPU-0): DFP-3: disconnected
[     8.753] (--) NVIDIA(GPU-0): DFP-3: Internal DisplayPort
[     8.753] (--) NVIDIA(GPU-0): DFP-3: 2670.0 MHz maximum pixel clock
[     8.753] (--) NVIDIA(GPU-0): 
[     8.753] (--) NVIDIA(GPU-0): DFP-4: disconnected
[     8.753] (--) NVIDIA(GPU-0): DFP-4: Internal TMDS
[     8.753] (--) NVIDIA(GPU-0): DFP-4: 165.0 MHz maximum pixel clock
[     8.753] (--) NVIDIA(GPU-0): 
[     8.753] (--) NVIDIA(GPU-0): DFP-5: disconnected
[     8.753] (--) NVIDIA(GPU-0): DFP-5: Internal DisplayPort
[     8.753] (--) NVIDIA(GPU-0): DFP-5: 2670.0 MHz maximum pixel clock
[     8.753] (--) NVIDIA(GPU-0): 
[     8.753] (--) NVIDIA(GPU-0): DFP-6: disconnected
[     8.753] (--) NVIDIA(GPU-0): DFP-6: Internal TMDS
[     8.753] (--) NVIDIA(GPU-0): DFP-6: 165.0 MHz maximum pixel clock
[     8.753] (--) NVIDIA(GPU-0): 
[     8.812] (==) NVIDIA(0): 
[     8.812] (==) NVIDIA(0): No modes were requested; the default mode "nvidia-auto-select"
[     8.812] (==) NVIDIA(0):     will be used as the requested mode.
[     8.812] (==) NVIDIA(0): 
[     8.814] (II) NVIDIA(0): Validated MetaModes:
[     8.814] (II) NVIDIA(0):     "DFP-0:nvidia-auto-select"
[     8.814] (II) NVIDIA(0): Virtual screen size determined to be 1920 x 1080
[     8.863] (--) NVIDIA(0): DPI set to (92, 94); computed from "UseEdidDpi" X config
[     8.863] (--) NVIDIA(0):     option
[     8.863] (II) UnloadModule: "modesetting"
[     8.863] (II) Unloading modesetting
[     8.864] (II) NVIDIA: Reserving 24576.00 MB of virtual memory for indirect memory
[     8.864] (II) NVIDIA:     access.
[     8.867] (II) NVIDIA(0): ACPI: failed to connect to the ACPI event daemon; the daemon
[     8.867] (II) NVIDIA(0):     may not be running or the "AcpidSocketPath" X
[     8.867] (II) NVIDIA(0):     configuration option may not be set correctly.  When the
[     8.867] (II) NVIDIA(0):     ACPI event daemon is available, the NVIDIA X driver will
[     8.867] (II) NVIDIA(0):     try to use it to receive ACPI event notifications.  For
[     8.867] (II) NVIDIA(0):     details, please see the "ConnectToAcpid" and
[     8.867] (II) NVIDIA(0):     "AcpidSocketPath" X configuration options in Appendix B: X
[     8.867] (II) NVIDIA(0):     Config Options in the README.
[     9.295] (II) NVIDIA(0): Setting mode "DFP-0:nvidia-auto-select"
[    28.319] (==) NVIDIA(0): Disabling shared memory pixmaps
[    28.319] (==) NVIDIA(0): Backing store enabled
[    28.319] (==) NVIDIA(0): Silken mouse enabled
[    28.319] (==) NVIDIA(0): DPMS enabled
[    28.319] (II) Loading sub module "dri2"
[    28.319] (II) LoadModule: "dri2"
[    28.319] (II) Module "dri2" already built-in
[    28.319] (II) NVIDIA(0): [DRI2] Setup complete
[    28.319] (II) NVIDIA(0): [DRI2]   VDPAU driver: nvidia
[    28.320] (II) Initializing extension Generic Event Extension
[    28.320] (II) Initializing extension SHAPE
[    28.320] (II) Initializing extension MIT-SHM
[    28.320] (II) Initializing extension XInputExtension
[    28.320] (II) Initializing extension XTEST
[    28.321] (II) Initializing extension BIG-REQUESTS
[    28.321] (II) Initializing extension SYNC
[    28.321] (II) Initializing extension XKEYBOARD
[    28.321] (II) Initializing extension XC-MISC
[    28.321] (II) Initializing extension SECURITY
[    28.321] (II) Initializing extension XFIXES
[    28.321] (II) Initializing extension RENDER
[    28.321] (II) Initializing extension RANDR
[    28.321] (II) Initializing extension COMPOSITE
[    28.321] (II) Initializing extension DAMAGE
[    28.321] (II) Initializing extension MIT-SCREEN-SAVER
[    28.321] (II) Initializing extension DOUBLE-BUFFER
[    28.321] (II) Initializing extension RECORD
[    28.321] (II) Initializing extension DPMS
[    28.321] (II) Initializing extension Present
[    28.322] (II) Initializing extension DRI3
[    28.322] (II) Initializing extension X-Resource
[    28.322] (II) Initializing extension XVideo
[    28.322] (II) Initializing extension XVideo-MotionCompensation
[    28.322] (II) Initializing extension GLX
[    28.322] (II) Initializing extension GLX
[    28.322] (II) Indirect GLX disabled.
[    28.322] (II) GLX: Another vendor is already registered for screen 0
[    28.322] (II) Initializing extension XFree86-VidModeExtension
[    28.322] (II) Initializing extension XFree86-DGA
[    28.322] (II) Initializing extension XFree86-DRI
[    28.322] (II) Initializing extension DRI2
[    28.322] (II) Initializing extension NV-GLX
[    28.322] (II) Initializing extension NV-CONTROL
[    28.322] (II) Initializing extension XINERAMA
[    28.387] (II) config/udev: Adding input device Power Button (/dev/input/event1)
[    28.387] (**) Power Button: Applying InputClass "libinput keyboard catchall"
[    28.387] (II) LoadModule: "libinput"
[    28.387] (II) Loading /usr/lib/xorg/modules/input/libinput_drv.so
[    28.391] (II) Module libinput: vendor="X.Org Foundation"
[    28.391] 	compiled for 1.21.1.3, module version = 1.2.1
[    28.391] 	Module class: X.Org XInput Driver
[    28.391] 	ABI class: X.Org XInput driver, version 24.4
[    28.391] (II) Using input driver 'libinput' for 'Power Button'
[    28.391] (**) Power Button: always reports core events
[    28.391] (**) Option "Device" "/dev/input/event1"
[    28.397] (II) event1  - Power Button: is tagged by udev as: Keyboard
[    28.397] (II) event1  - Power Button: device is a keyboard
[    28.397] (II) event1  - Power Button: device removed
[    28.420] (**) Option "config_info" "udev:/sys/devices/LNXSYSTM:00/LNXPWRBN:00/input/input1/event1"
[    28.420] (II) XINPUT: Adding extended input device "Power Button" (type: KEYBOARD, id 6)
[    28.421] (II) event1  - Power Button: is tagged by udev as: Keyboard
[    28.421] (II) event1  - Power Button: device is a keyboard
[    28.421] (II) config/udev: Adding input device Power Button (/dev/input/event0)
[    28.421] (**) Power Button: Applying InputClass "libinput keyboard catchall"
[    28.421] (II) Using input driver 'libinput' for 'Power Button'
[    28.421] (**) Power Button: always reports core events
[    28.421] (**) Option "Device" "/dev/input/event0"
[    28.422] (II) event0  - Power Button: is tagged by udev as: Keyboard
[    28.422] (II) event0  - Power Button: device is a keyboard
[    28.422] (II) event0  - Power Button: device removed
[    28.437] (**) Option "config_info" "udev:/sys/devices/LNXSYSTM:00/LNXSYBUS:00/PNP0C0C:00/input/input0/event0"
[    28.437] (II) XINPUT: Adding extended input device "Power Button" (type: KEYBOARD, id 7)
[    28.437] (II) event0  - Power Button: is tagged by udev as: Keyboard
[    28.438] (II) event0  - Power Button: device is a keyboard
[    28.438] (II) config/udev: Adding input device Logitech ERGO M575 (/dev/input/event5)
[    28.438] (**) Logitech ERGO M575: Applying InputClass "libinput pointer catchall"
[    28.438] (II) Using input driver 'libinput' for 'Logitech ERGO M575'
[    28.438] (**) Logitech ERGO M575: always reports core events
[    28.438] (**) Option "Device" "/dev/input/event5"
[    28.439] (II) event5  - Logitech ERGO M575: is tagged by udev as: Mouse
[    28.439] (II) event5  - Logitech ERGO M575: device is a pointer
[    28.439] (II) event5  - Logitech ERGO M575: device removed
[    28.470] (**) Option "config_info" "udev:/sys/devices/pci0000:00/0000:00:01.3/0000:01:00.0/usb1/1-4/1-4:1.2/0003:046D:C52B.0003/0003:046D:4096.0005/input/input15/event5"
[    28.470] (II) XINPUT: Adding extended input device "Logitech ERGO M575" (type: MOUSE, id 8)
[    28.470] (**) Option "AccelerationScheme" "none"
[    28.470] (**) Logitech ERGO M575: (accel) selected scheme none/0
[    28.470] (**) Logitech ERGO M575: (accel) acceleration factor: 2.000
[    28.470] (**) Logitech ERGO M575: (accel) acceleration threshold: 4
[    28.471] (II) event5  - Logitech ERGO M575: is tagged by udev as: Mouse
[    28.471] (II) event5  - Logitech ERGO M575: device is a pointer
[    28.472] (II) config/udev: Adding input device Logitech ERGO M575 (/dev/input/mouse0)
[    28.472] (II) No input driver specified, ignoring this device.
[    28.472] (II) This device may have been added with another device file.
[    28.472] (II) config/udev: Adding input device USB Keyboard (/dev/input/event2)
[    28.472] (**) USB Keyboard: Applying InputClass "libinput keyboard catchall"
[    28.472] (II) Using input driver 'libinput' for 'USB Keyboard'
[    28.472] (**) USB Keyboard: always reports core events
[    28.472] (**) Option "Device" "/dev/input/event2"
[    28.473] (II) event2  - USB Keyboard: is tagged by udev as: Keyboard
[    28.473] (II) event2  - USB Keyboard: device is a keyboard
[    28.473] (II) event2  - USB Keyboard: device removed
[    28.497] (**) Option "config_info" "udev:/sys/devices/pci0000:00/0000:00:01.3/0000:01:00.0/usb1/1-7/1-7:1.0/0003:0C45:760A.0004/input/input7/event2"
[    28.497] (II) XINPUT: Adding extended input device "USB Keyboard" (type: KEYBOARD, id 9)
[    28.498] (II) event2  - USB Keyboard: is tagged by udev as: Keyboard
[    28.498] (II) event2  - USB Keyboard: device is a keyboard
[    28.499] (II) config/udev: Adding input device USB Keyboard Consumer Control (/dev/input/event3)
[    28.499] (**) USB Keyboard Consumer Control: Applying InputClass "libinput keyboard catchall"
[    28.499] (II) Using input driver 'libinput' for 'USB Keyboard Consumer Control'
[    28.499] (**) USB Keyboard Consumer Control: always reports core events
[    28.499] (**) Option "Device" "/dev/input/event3"
[    28.500] (II) event3  - USB Keyboard Consumer Control: is tagged by udev as: Keyboard
[    28.500] (II) event3  - USB Keyboard Consumer Control: device is a keyboard
[    28.500] (II) event3  - USB Keyboard Consumer Control: device removed
[    28.523] (II) libinput: USB Keyboard Consumer Control: needs a virtual subdevice
[    28.523] (**) Option "config_info" "udev:/sys/devices/pci0000:00/0000:00:01.3/0000:01:00.0/usb1/1-7/1-7:1.1/0003:0C45:760A.0006/input/input12/event3"
[    28.523] (II) XINPUT: Adding extended input device "USB Keyboard Consumer Control" (type: MOUSE, id 10)
[    28.523] (**) Option "AccelerationScheme" "none"
[    28.523] (**) USB Keyboard Consumer Control: (accel) selected scheme none/0
[    28.523] (**) USB Keyboard Consumer Control: (accel) acceleration factor: 2.000
[    28.523] (**) USB Keyboard Consumer Control: (accel) acceleration threshold: 4
[    28.525] (II) event3  - USB Keyboard Consumer Control: is tagged by udev as: Keyboard
[    28.525] (II) event3  - USB Keyboard Consumer Control: device is a keyboard
[    28.525] (II) config/udev: Adding input device USB Keyboard System Control (/dev/input/event4)
[    28.525] (**) USB Keyboard System Control: Applying InputClass "libinput keyboard catchall"
[    28.525] (II) Using input driver 'libinput' for 'USB Keyboard System Control'
[    28.525] (**) USB Keyboard System Control: always reports core events
[    28.525] (**) Option "Device" "/dev/input/event4"
[    28.526] (II) event4  - USB Keyboard System Control: is tagged by udev as: Keyboard
[    28.526] (II) event4  - USB Keyboard System Control: device is a keyboard
[    28.526] (II) event4  - USB Keyboard System Control: device removed
[    28.550] (**) Option "config_info" "udev:/sys/devices/pci0000:00/0000:00:01.3/0000:01:00.0/usb1/1-7/1-7:1.1/0003:0C45:760A.0006/input/input13/event4"
[    28.550] (II) XINPUT: Adding extended input device "USB Keyboard System Control" (type: KEYBOARD, id 11)
[    28.551] (II) event4  - USB Keyboard System Control: is tagged by udev as: Keyboard
[    28.551] (II) event4  - USB Keyboard System Control: device is a keyboard
[    28.552] (II) config/udev: Adding input device USB Keyboard (/dev/input/event6)
[    28.552] (**) USB Keyboard: Applying InputClass "libinput keyboard catchall"
[    28.552] (II) Using input driver 'libinput' for 'USB Keyboard'
[    28.552] (**) USB Keyboard: always reports core events
[    28.552] (**) Option "Device" "/dev/input/event6"
[    28.553] (II) event6  - USB Keyboard: is tagged by udev as: Keyboard
[    28.553] (II) event6  - USB Keyboard: device is a keyboard
[    28.553] (II) event6  - USB Keyboard: device removed
[    28.577] (**) Option "config_info" "udev:/sys/devices/pci0000:00/0000:00:01.3/0000:01:00.0/usb1/1-7/1-7:1.1/0003:0C45:760A.0006/input/input14/event6"
[    28.577] (II) XINPUT: Adding extended input device "USB Keyboard" (type: KEYBOARD, id 12)
[    28.578] (II) event6  - USB Keyboard: is tagged by udev as: Keyboard
[    28.578] (II) event6  - USB Keyboard: device is a keyboard
[    28.578] (II) config/udev: Adding input device HDA NVidia HDMI/DP,pcm=3 (/dev/input/event8)
[    28.578] (II) No input driver specified, ignoring this device.
[    28.578] (II) This device may have been added with another device file.
[    28.579] (II) config/udev: Adding input device HDA NVidia HDMI/DP,pcm=7 (/dev/input/event9)
[    28.579] (II) No input driver specified, ignoring this device.
[    28.579] (II) This device may have been added with another device file.
[    28.579] (II) config/udev: Adding input device HDA NVidia HDMI/DP,pcm=8 (/dev/input/event10)
[    28.579] (II) No input driver specified, ignoring this device.
[    28.579] (II) This device may have been added with another device file.
[    28.579] (II) config/udev: Adding input device HDA NVidia HDMI/DP,pcm=9 (/dev/input/event11)
[    28.579] (II) No input driver specified, ignoring this device.
[    28.579] (II) This device may have been added with another device file.
[    28.579] (II) config/udev: Adding input device HDA NVidia HDMI/DP,pcm=10 (/dev/input/event12)
[    28.579] (II) No input driver specified, ignoring this device.
[    28.579] (II) This device may have been added with another device file.
[    28.580] (II) config/udev: Adding input device HDA NVidia HDMI/DP,pcm=11 (/dev/input/event13)
[    28.580] (II) No input driver specified, ignoring this device.
[    28.580] (II) This device may have been added with another device file.
[    28.580] (II) config/udev: Adding input device HDA NVidia HDMI/DP,pcm=12 (/dev/input/event14)
[    28.580] (II) No input driver specified, ignoring this device.
[    28.580] (II) This device may have been added with another device file.
[    28.580] (II) config/udev: Adding input device HD-Audio Generic Front Mic (/dev/input/event15)
[    28.580] (II) No input driver specified, ignoring this device.
[    28.580] (II) This device may have been added with another device file.
[    28.580] (II) config/udev: Adding input device HD-Audio Generic Rear Mic (/dev/input/event16)
[    28.580] (II) No input driver specified, ignoring this device.
[    28.580] (II) This device may have been added with another device file.
[    28.581] (II) config/udev: Adding input device HD-Audio Generic Line (/dev/input/event17)
[    28.581] (II) No input driver specified, ignoring this device.
[    28.581] (II) This device may have been added with another device file.
[    28.581] (II) config/udev: Adding input device HD-Audio Generic Line Out (/dev/input/event18)
[    28.581] (II) No input driver specified, ignoring this device.
[    28.581] (II) This device may have been added with another device file.
[    28.581] (II) config/udev: Adding input device HD-Audio Generic Front Headphone (/dev/input/event19)
[    28.581] (II) No input driver specified, ignoring this device.
[    28.581] (II) This device may have been added with another device file.
[    28.581] (II) config/udev: Adding input device Eee PC WMI hotkeys (/dev/input/event20)
[    28.581] (**) Eee PC WMI hotkeys: Applying InputClass "libinput keyboard catchall"
[    28.581] (II) Using input driver 'libinput' for 'Eee PC WMI hotkeys'
[    28.581] (**) Eee PC WMI hotkeys: always reports core events
[    28.581] (**) Option "Device" "/dev/input/event20"
[    28.582] (II) event20 - Eee PC WMI hotkeys: is tagged by udev as: Keyboard
[    28.582] (II) event20 - Eee PC WMI hotkeys: device is a keyboard
[    28.582] (II) event20 - Eee PC WMI hotkeys: device removed
[    28.620] (**) Option "config_info" "udev:/sys/devices/platform/eeepc-wmi/input/input29/event20"
[    28.620] (II) XINPUT: Adding extended input device "Eee PC WMI hotkeys" (type: KEYBOARD, id 13)
[    28.621] (II) event20 - Eee PC WMI hotkeys: is tagged by udev as: Keyboard
[    28.621] (II) event20 - Eee PC WMI hotkeys: device is a keyboard
[    28.621] (II) config/udev: Adding input device PC Speaker (/dev/input/event7)
[    28.621] (II) No input driver specified, ignoring this device.
[    28.621] (II) This device may have been added with another device file.
[    28.625] (**) USB Keyboard Consumer Control: Applying InputClass "libinput keyboard catchall"
[    28.625] (II) Using input driver 'libinput' for 'USB Keyboard Consumer Control'
[    28.625] (**) USB Keyboard Consumer Control: always reports core events
[    28.625] (**) Option "Device" "/dev/input/event3"
[    28.625] (II) libinput: USB Keyboard Consumer Control: is a virtual subdevice
[    28.625] (**) Option "config_info" "udev:/sys/devices/pci0000:00/0000:00:01.3/0000:01:00.0/usb1/1-7/1-7:1.1/0003:0C45:760A.0006/input/input12/event3"
[    28.625] (II) XINPUT: Adding extended input device "USB Keyboard Consumer Control" (type: KEYBOARD, id 14)
[    40.704] (--) NVIDIA(GPU-0): PTFWFE-24W (DFP-0): connected
[    40.704] (--) NVIDIA(GPU-0): PTFWFE-24W (DFP-0): Internal TMDS
[    40.704] (--) NVIDIA(GPU-0): PTFWFE-24W (DFP-0): 600.0 MHz maximum pixel clock
[    40.704] (--) NVIDIA(GPU-0): 
