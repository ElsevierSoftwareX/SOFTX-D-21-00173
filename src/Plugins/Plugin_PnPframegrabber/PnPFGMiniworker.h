#include <QObject>
#include <ifindImage.h>
#include <string>

class PnPFGMiniworker : public QObject{
    Q_OBJECT

public:
    Q_SLOT  void doWork(ifind::Image::Pointer im);
    std::string filename;
};
