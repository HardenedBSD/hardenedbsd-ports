PORTNAME=	zeal
PORTVERSION=	0.6.1
PORTREVISION=	4
DISTVERSIONPREFIX=v
CATEGORIES=	devel

MAINTAINER=	rakuco@FreeBSD.org
COMMENT=	Offline documentation browser
WWW=		https://zealdocs.org

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libxcb.so:x11/libxcb \
		libxcb-keysyms.so:x11/xcb-util-keysyms

USES=		cmake compiler:c++11-lib desktop-file-utils gl gnome kde:5 \
		libarchive pkgconfig qt:5 sqlite xorg
USE_GL=		gl  # Dependency added by qt5-gui.
USE_GITHUB=	yes
USE_KDE=	ecm
USE_QT=		concurrent core gui network webkit widgets x11extras \
		buildtools:build qmake:build
USE_XORG=	ice sm x11 xcb xext

MPROTECT_DISABLE=	bin/zeal
PAGEEXEC_DISABLE=	bin/zeal

GH_ACCOUNT=	zealdocs

.include <bsd.port.mk>
