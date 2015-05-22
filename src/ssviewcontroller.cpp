#include "ssviewcontroller.h"
#include "sstimeserieswidget.h"
#include "sscommon.h"
#include "diskarraymodel.h"
#include <QDebug>
#include "sstimeseriesview.h"
#include "sslabelview.h"
#include "mdaobject.h"

SSViewController::SSViewController()
{

}

SSViewController::~SSViewController()
{

}

QWidget *SSViewController::createTimeSeriesWidget() {
	SSTimeSeriesWidget *W=new SSTimeSeriesWidget();
	W->setAttribute(Qt::WA_DeleteOnClose);
	W->showNormal();
	W->resize(1000,500);
	W->move(300,300);
	return W;
}

QWidget *SSViewController::createTimeSeriesView() {
	SSTimeSeriesView *V=new SSTimeSeriesView();
	return V;
}

QWidget *SSViewController::createLabelView()
{
	SSLabelView *V=new SSLabelView();
	return V;
}

QObject *SSViewController::loadArray(QString path) {
	SSARRAY *X=new SSARRAY();
	X->setPath(path.toLatin1().data());

	return X;
}

QObject *SSViewController::readArray(QString path)
{
	DiskReadMda *ret=new DiskReadMda;
	ret->setPath(path);
	return ret;
}
