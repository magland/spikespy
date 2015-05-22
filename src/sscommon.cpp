#include "sscommon.h"

Vec2 vec2(double x,double y) {
	Vec2 ret; ret.x=x; ret.y=y; return ret;
}

QString ssTempPath() {return qApp->applicationDirPath()+"/../tmp";}
