require xorg-proto-common.inc
PE = "1"
PR = "${INC_PR}.0"

SRC_URI[archive.md5sum] = "388234421add6c1760b4fc99fcdc76b0"
SRC_URI[archive.sha256sum] = "bec5a98bbea56da069785784116261ec956df039fb07d0cdca53ae1ed03ebc0f"

BBCLASSEXTEND = "native nativesdk sdk"
