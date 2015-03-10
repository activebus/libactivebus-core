#include "version.h"
#include "version_p.h"

using namespace AB;

Version::Version()
    : data(new VersionData)
{ }

Version::Version(const Version &other)
    : data(other.data)
{ }

Version &Version::operator=(const Version &other)
{
    if (this != &other)
        data.operator=(other.data);
    return *this;
}

Version::~Version()
{ }
