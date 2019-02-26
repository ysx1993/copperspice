/***********************************************************************
*
* Copyright (c) 2012-2018 Barbara Geller
* Copyright (c) 2012-2018 Ansel Sermersheim
* Copyright (c) 2012-2016 Digia Plc and/or its subsidiary(-ies).
* Copyright (c) 2008-2012 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
*
* This file is part of CopperSpice.
*
* CopperSpice is free software. You can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public License
* version 2.1 as published by the Free Software Foundation.
*
* CopperSpice is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
* <http://www.gnu.org/licenses/>.
*
***********************************************************************/

#ifndef QCOCOAACCESIBILITYELEMENT_H
#define QCOCOAACCESIBILITYELEMENT_H

#include <QtCore/qglobal.h>

#include "qt_mac_p.h"

#ifndef QT_NO_ACCESSIBILITY

#import <Cocoa/Cocoa.h>
#import <AppKit/NSAccessibility.h>

#import <qaccessible.h>

@class QT_MANGLE_NAMESPACE(QMacAccessibilityElement);

@interface QT_MANGLE_NAMESPACE(QMacAccessibilityElement) : NSObject {
    NSString *role;
    QAccessible::Id axid;
}

- (id)initWithId:(QAccessible::Id)anId;
+ (QT_MANGLE_NAMESPACE(QMacAccessibilityElement) *)elementWithId:(QAccessible::Id)anId;

@end

QT_NAMESPACE_ALIAS_OBJC_CLASS(QMacAccessibilityElement);

#endif // QT_NO_ACCESSIBILITY

#endif // QCOCOAACCESIBILITYELEMENT_H