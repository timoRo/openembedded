require xorg-driver-video.inc
DESCRIPTION = "X.org server -- Geode GX2/LX display driver"
PE = "1"
PR = "${INC_PR}.0"

SRC_URI[archive.md5sum] = "d7b3254e6f4f1978fecf8f4fa2823259"
SRC_URI[archive.sha256sum] = "b9aa934b94c0397e32cd702788fe2b6f2398bdc1a8c83594ad25274f82593590"

COMPATIBLE_HOST = "i.86.*-linux"
