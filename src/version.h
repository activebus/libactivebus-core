#ifndef VERSION_H
#define VERSION_H

#include "activebus-core_global.h"

#include <QSharedDataPointer>

namespace AB {

class VersionData;
class ACTIVEBUSCORESHARED_EXPORT Version
{
public:
    Version();
    Version(const Version &other);
    Version &operator=(const Version &other);
    ~Version();

private:
    QSharedDataPointer<VersionData> data;
};

}

#endif // VERSION_H
