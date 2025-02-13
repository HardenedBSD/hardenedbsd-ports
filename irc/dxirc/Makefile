PORTNAME=	dxirc
PORTVERSION=	1.40.1
CATEGORIES=	irc
MASTER_SITES=	SF/${PORTNAME}/${PORTVERSION}

MAINTAINER=	archdvx@dxsolutions.org
COMMENT=	Simple IRC client
WWW=		https://www.dxirc.org/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USE_HARDENING=	pie:off

USES=		cmake compiler:c++11-lang gnome pkgconfig xorg
USE_XORG=	ice sm x11 xext

OPTIONS_DEFINE=		NLS LUA ENCHANT NOTIFY
OPTIONS_SINGLE=		GUI
OPTIONS_SINGLE_GUI=	FOX16 QT5
OPTIONS_DEFAULT=	LUA QT5
OPTIONS_SUB=		yes

ENCHANT_DESC=		Spell checking support via Enchant
ENCHANT_LIB_DEPENDS=	libenchant.so:textproc/enchant
ENCHANT_CMAKE_BOOL=	HAVE_ENCHANT

FOX16_DESC=		FOX 1.6 toolkit support
FOX16_LIB_DEPENDS=	libFOX-1.6.so:x11-toolkits/fox16
FOX16_USES=		ssl
FOX16_CMAKE_ON=		-DFOX_ENABLE_IPV6:BOOL=ON \
			-DBUILD_FOX:BOOL=ON -DBUILD_QT:BOOL=OFF
FOX16_CMAKE_OFF=	-DBUILD_FOX:BOOL=OFF -DBUILD_QT:BOOL=ON

LUA_USES=		lua
LUA_CMAKE_BOOL=		WITH_LUA

NLS_USES=		gettext
NLS_CMAKE_BOOL=		WITH_NLS

NOTIFY_RUN_DEPENDS=	notify-send:devel/libnotify

QT5_USES=	qt:5
QT5_USE=		QT=core,gui,multimedia,network,widgets \
			QT=buildtools:build,qmake:build

.include <bsd.port.mk>
