PORTNAME=	crc32c
DISTVERSION=	1.1.2
CATEGORIES=	devel

MAINTAINER=	amzo1337@gmail.com
COMMENT=	CRC32C implementation supporting CPU-specific acceleration
WWW=		https://github.com/google/crc32c

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake compiler:c++11-lang
USE_GITHUB=	yes
GH_ACCOUNT=	google
USE_LDCONFIG=	yes

USE_HARDENING=	pie:off

CMAKE_ON=	BUILD_SHARED_LIBS
CMAKE_OFF=	CRC32C_BUILD_TESTS CRC32C_BUILD_BENCHMARKS CRC32C_USE_GLOG

.include <bsd.port.mk>
