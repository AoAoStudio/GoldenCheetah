/*
 * Copyright (c) 2010 Mark Liversedge (liversedge@gmail.com)
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc., 51
 * Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef _KmlRideFile_h
#define _KmlRideFile_h
#include "GoldenCheetah.h"

#include "RideFile.h"

struct KmlFileReader : public RideFileReader {
    virtual RideFile *openRideFile(QFile &, QStringList &, QList<RideFile*>* =0) const { return NULL; } // does not support reading
    bool writeRideFile(MainWindow *, const RideFile *ride, QFile &file) const;
    bool hasWrite() const { return true; }
};

#endif // _KmlRideFile_h
