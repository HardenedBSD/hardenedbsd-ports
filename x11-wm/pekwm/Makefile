PORTNAME=	pekwm
DISTVERSIONPREFIX=	release-
DISTVERSION=	0.2.0
PORTEPOCH=	1
CATEGORIES=	x11-wm

MAINTAINER=	natbsd@instinctive.eu
COMMENT=	Light, Unobtrusive, and configurable windowmanager
WWW=		https://www.pekwm.se/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libpng.so:graphics/png \
		libfreetype.so:print/freetype2
RUN_DEPENDS=	gsed:textproc/gsed \
		xprop:x11/xprop

USES=		cmake compiler jpeg \
		localbase pkgconfig tar:bzip2 xorg
USE_XORG=	xft xpm x11 sm ice xext xinerama xrandr
USE_GITHUB=	yes
GH_ACCOUNT=	pekdon

USE_HARDENING=	pie:off

.include <bsd.port.mk>
