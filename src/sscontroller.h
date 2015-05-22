#ifndef SSVIEWCONTROLLER_H
#define SSVIEWCONTROLLER_H

#include <QObject>

class SSViewController : public QObject
{
	Q_OBJECT
public:
	SSViewController();
	~SSViewController();
	Q_INVOKABLE QWidget *createTimeSeriesWidget();
	Q_INVOKABLE QWidget *createTimeSeriesView();
	Q_INVOKABLE QWidget *createLabelView();
	Q_INVOKABLE QObject *loadArray(QString path);
	Q_INVOKABLE QObject *readArray(QString path);
};


#endif // SSVIEWCONTROLLER_H
