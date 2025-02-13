PORTNAME=	kwinft
DISTVERSIONPREFIX=	${PORTNAME}@
DISTVERSION=	5.24.1
PORTREVISION=	1
CATEGORIES=	x11-wm wayland

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Wayland compositor and X11 window manager
WWW=		https://gitlab.com/kwinft/kwinft

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	evdev-proto>0:devel/evdev-proto
LIB_DEPENDS=	libepoxy.so:graphics/libepoxy \
		libwayland-server.so:graphics/wayland \
		libWraplandServer.so:graphics/wrapland \
		libfreetype.so:print/freetype2 \
		libfontconfig.so:x11-fonts/fontconfig \
		libwlroots.so:x11-toolkits/wlroots \
		libinput.so:x11/libinput \
		libxkbcommon.so:x11/libxkbcommon \
		libxcb-cursor.so:x11/xcb-util-cursor \
		libxcb-image.so:x11/xcb-util-image \
		libxcb-keysyms.so:x11/xcb-util-keysyms \
		libxcb-icccm.so:x11/xcb-util-wm
TEST_DEPENDS=	${qt-testlib_PORT:T}>0:${qt-testlib_PORT}

CONFLICTS_INSTALL=	plasma5-kwin # bin/kwin_wayland

USES=		cmake:testing gl kde:5 pkgconfig python:run qt:5 shebangfix xorg
USE_GITLAB=	yes
USE_GL=		egl
USE_KDE=	ecm:build auth completion config configwidgets \
		coreaddons crash dbusaddons decoration globalaccel i18n \
		idletime kcmutils kdeclarative kio kscreenlocker newstuff \
		notifications package plasma-framework service textwidgets \
		widgetsaddons windowsystem xmlgui
USE_LDCONFIG=	yes
USE_QT=		qmake:build buildtools:build core dbus declarative gui \
		multimedia:run quickcontrols2:run widgets x11extras
USE_XORG=	pixman x11 xcb xi
SHEBANG_FILES=	kconf_update/*.py kconf_update/*.pl
GL_COMMIT=	022f157ce4bd14fbe069ab6fe41647b70d20f004
PLIST_SUB=	VERSION=${PORTVERSION}
LDFLAGS+=	-Wl,--as-needed # GL, ICE/SM/Xext, epoll-shim, glib, intl, Qt5*, KF5*

OPTIONS_DEFINE=	BREEZE DOCS QA11Y
OPTIONS_DEFAULT=BREEZE QA11Y

BREEZE_DESC=		Default window decoration plugin
BREEZE_USE=		KDE=breeze
BREEZE_CMAKE_BOOL_OFF=	CMAKE_DISABLE_FIND_PACKAGE_Breeze

DOCS_USE=		KDE=doctools:build
DOCS_CMAKE_BOOL_OFF=	CMAKE_DISABLE_FIND_PACKAGE_KF5DocTools

QA11Y_DESC=		Accessibility (focus tracking) for Zoom effect
QA11Y_LIB_DEPENDS=	libqaccessibilityclient-qt5.so:accessibility/libqaccessibilityclient
QA11Y_CMAKE_BOOL_OFF=	CMAKE_DISABLE_FIND_PACKAGE_QAccessibilityClient

.include "${.CURDIR:H:H}/x11-toolkits/wlroots015/override.mk"
.include <bsd.port.mk>
