PORTNAME=	psutils
PORTVERSION=	1.17
PORTREVISION=	5
CATEGORIES=	print
MASTER_SITES=	ftp://ftp.dcs.ed.ac.uk/pub/ajcd/ \
		ftp://ftp.knackered.org/pub/psutils/ \
		TEX_CTAN/support/psutils
DISTNAME=	psutils-p17

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Utilities for manipulating PostScript documents
WWW=		http://gershwin.ens.fr/vdaniel/Doc-Locale/Outils-Gnu-Linux/PsUtils/

USE_HARDENING=	safestack

LIB_DEPENDS=	libpaper.so:print/libpaper

USES=		perl5
USE_PERL5=	build
WRKSRC=		${WRKDIR}/${PORTNAME}
MAKEFILE=	Makefile.unix
MAKE_ENV+=	DATADIR="${DATADIR}" PERL="${PERL}" CHMOD="${CHMOD}"
SCRIPTS_ENV+=	PERL5=${PERL} CC=${CC} DATADIR=${DATADIR} \
		MANPREFIX=${MANPREFIX} PAPER=dummy

.include <bsd.port.mk>
