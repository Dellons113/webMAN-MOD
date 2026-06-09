//#define ENGLISH_ONLY	// uncomment for english only version
//#define USE_INTERNAL_NTFS_PLUGIN	// comment out to use internal rawseciso & netiso clients when raw_iso.sprx & netiso.sprx are unavailable
#define WM_PROXY_SPRX	"idle_plugin"		// plugin used as xmb proxy to mount games (idle_plugin, xai_plugin, wboard_plugin, bdp_disccheck_plugin)

//// EDITIONS ////

#define COBRA_ONLY		// comment out for ccapi/non-cobra release
#define REX_ONLY		// DIAKTIFKAN: shortcuts for REBUG REX CFWs 
//#define FULL_EDITION  // DIHAPUS: Diganti ke LITE_EDITION agar sangat ringan

//#define PS3MAPI			// DIHAPUS: ps3 manager API & webGUI by _NzV_
#define LITE_EDITION	// DIAKTIFKAN: no ps3netsrv support, smaller memory footprint

//#define DEX_SUPPORT		// DIHAPUS: (Biarkan mati jika Anda bermain di mode CEX Rebug untuk menghemat RAM)
//#define DECR_SUPPORT	    // DIHAPUS: add support for DECR
#define LAST_FIRMWARE_ONLY  // support only 4.84-4.91 CEX / DEX (no FIX_GAME)

//// OVERRIDE KHUSUS ////
#define INGAME_DIAGNOSTICS 1 // Wajib ditambahkan agar overlay suhu START+SELECT tetap muncul

//// FEATURES ////
//#define FIX_GAME		// DIHAPUS: Auto-Fix game
//#define EXT_GDATA		// DIHAPUS: /extgd.ps3?status /extgd.ps3?enable /extgd.ps3?disable (external gameDATA)
#define COPY_PS3		// batch script commands and /copy.ps3/<path>
//#define DEBUG_MEM		// DIHAPUS: /dump.ps3 / peek.lv1 / poke.lv1 / find.lv1 / peek.lv2 / poke.lv2 / find.lv2
//#define VIDEO_REC		// DIHAPUS: /videorec.ps3  start/stop video recording (in-game only) (thanks to mysis & 3141card)
#define LOAD_PRX		// /loadprx.ps3?slot=n&prx=path/file.sprx  (load prx)
#define FAKEISO 		// support .ntfs[BDFILE] (fake ISO)
#define BDVD_REGION		// change BD/DVD region
#define REMOVE_SYSCALLS	// remove syscalls on startup and using R2+TRIANGLE
//#define SPOOF_CONSOLEID	// DIHAPUS: spoof idps/psid (thanks to M@tumot0 & zar)
//#define VIRTUAL_PAD		// DIHAPUS: virtual pad (thanks to OsiriX)
//#define WM_REQUEST		// DIHAPUS: accept commands via local file /dev_hdd0/tmp/wm_request
#define PS3_BROWSER		// /xmb.ps3 / /browser.ps3 / open browser combos
#define AUTO_POWER_OFF	// Disable temporarily the auto power off setting in xRegistry during ftp session, /install.ps3 & /download.ps3 (idea by 444nonymous)
#define OFFLINE_INGAME	// allow set auto-disable network in-game (idea by 444nonymous)
//#define SYS_ADMIN_MODE	// DIHAPUS: Enable restricted / admin modes using L2+R2+TRIANGLE
//#define PKG_LAUNCHER	// DIHAPUS: scan & mount np games extracted to GAMEI / scan ROMS
//#define PKG_HANDLER		// DIHAPUS: /download.ps3?url=<url>, /download.ps3?to=<path>&url=<url>, /install.ps3<pkg-path> (thanks to bguerville & mysis)
#define USE_NTFS		// add NTFS support
//#define BACKUP_ACT_DAT	// DIHAPUS: backup/restore act.dat on HEN
//#define PATCH_GAMEBOOT	// DIHAPUS: Patch gameboot to show custom animation per game type

//// EXTRA FEATURES ////
//#define GET_KLICENSEE	// DIHAPUS: /klic.ps3
//#define XMB_SCREENSHOT	// DIHAPUS: screenshot XMB using L2 + R2 + SELECT + START (thanks to 3141card)
//#define SWAP_KERNEL		// DIHAPUS: load custom lv2_kernel.self patching LV1 and soft rebooting (use /copy.ps3) [requires QA flag enabled]
//#define WM_CUSTOM_COMBO	// DIHAPUS: advanced custom combos
//#define NET3NET4		// DIHAPUS: add support for /net3 and /net4
//#define PS3NET_SERVER	// DIHAPUS: ps3 net server
//#define PS2_DISC		// DIHAPUS: uncomment to support /mount.ps2
#define NOSINGSTAR		// remove SingStar icon from XMB  (thanks to bguerville)
//#define CALC_MD5		// DIHAPUS: /md5.ps3/<file>
//#define LAUNCHPAD		// DIHAPUS: create /dev_hdd0/tmp/wm_lauchpad.xml
#define NOBD_PATCH		// DIAKTIFKAN: /nobd.ps3 (Penyelamat untuk konsol tanpa optik BD)
//#define PLAY_MUSIC		// DIHAPUS: experimental support for Play Music on startup
//#define PHOTO_GUI		// DIHAPUS: PhotoGUI: mount games through Photo column
//#define MOUNT_PNG		// DIHAPUS: support fake PNG as ISO
//#define VISUALIZERS		// DIHAPUS: Rotate visualizers (earth, lines, canyon, coldboot_*.ac3)
//#define PS3MON_SPRX		// DIHAPUS: ps3mon.sprx
//#define BDINFO			// DIHAPUS: /bdinfo.ps3
//#define ARTEMIS_PRX     // DIHAPUS: Cheat Engine Artemis

//// INTERNAL PLUGINS ////
//#define USE_INTERNAL_NET_PLUGIN	// comment out to use netiso.sprx
//#define USE_INTERNAL_NTFS_PLUGIN	// comment out to use raw_iso.sprx

//// TEST FEATURES ////
//#define ALLOW_DISABLE_MAP_PATH	// Use SELECT+O to temporarily disable sys_map_path()
//#define SYS_BGM				// DIHAPUS: system background music (may freeze the system when enabled)
//#define USE_DEBUG			// debug using telnet
//#define WEB_CHAT			// DIHAPUS: /chat.ps3
//#define AUTO_EJECT_DISC	// eject disc holding SELECT on mount
//#define RAWISO_PSX_MULTI	// support for multi PSX from Iris Manager (it's incomplete - only rawseciso.h code is complete) (thanks to Estwald)
//#define SECURE_FILE_ID	// hook savedata plugin to capture secure file id (this feature is currently broken)
//#define UNLOCK_SAVEDATA	// patch PARAM.SFO on upload/download/copy operations to remove ACCOUNT_ID, PSID and COPY PROTECTION flag. UserID is updated to current user.
