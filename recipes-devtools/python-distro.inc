SUMMARY = "Linux Distribution - a Linux OS platform information API"
HOMEPAGE = "https://github.com/nir0s/distro"
AUTHOR = "Nir Cohen <nir36g@gmail.com>"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=d2794c0df5b907fdace235a619d80314"

SRC_URI[md5sum] = "fc4c60a102271446a23ab20069a3453c"
SRC_URI[sha256sum] = "722054925f339a39ca411a8c7079f390a41d42c422697bedf228f1a9c46ac1ee"

RDEPENDS_${PN} = "\
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-shell \
    ${PYTHON_PN}-json \
"

inherit pypi

BBCLASSEXTEND = "native nativesdk"
