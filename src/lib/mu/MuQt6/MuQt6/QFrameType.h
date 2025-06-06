//*****************************************************************************
// Copyright (c) 2024 Autodesk, Inc.
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
//*****************************************************************************

// IMPORTANT: This file (not the template) is auto-generated by qt2mu.py script.
//            The prefered way to do a fix is to handrolled it or modify the
//            qt2mu.py script. If it is not possible, manual editing is ok but
//            it could be lost in future generations.

#ifndef __MuQt6__QFrameType__h__
#define __MuQt6__QFrameType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include <QtQml/QtQml>
#include <QtQuick/QtQuick>
#include <QtQuickWidgets/QtQuickWidgets>
#include <QtSvg/QtSvg>
#include <QSvgWidget>
#include <MuQt6/Bridge.h>

namespace Mu
{
    class MuQt_QFrame;

    class QFrameType : public Class
    {
    public:
        typedef MuQt_QFrame MuQtType;
        typedef QFrame QtType;

        //
        //  Constructors
        //

        QFrameType(Context* context, const char* name, Class* superClass = 0,
                   Class* superClass2 = 0);

        virtual ~QFrameType();

        static bool isInheritable() { return true; }

        static inline ClassInstance* cachedInstance(const MuQtType*);

        //
        //  Class API
        //

        virtual void load();

        MemberFunction* _func[31];
    };

    // Inheritable object

    class MuQt_QFrame : public QFrame
    {
    public:
        virtual ~MuQt_QFrame();
        MuQt_QFrame(Pointer muobj, const CallEnvironment*, QWidget* parent,
                    Qt::WindowFlags f);
        virtual QSize sizeHint() const;

    protected:
        virtual void changeEvent(QEvent* ev);
        virtual bool event(QEvent* e);
        virtual void paintEvent(QPaintEvent* _p14);

    public:
        virtual bool hasHeightForWidth() const;
        virtual int heightForWidth(int w) const;
        virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const;
        virtual QSize minimumSizeHint() const;

    protected:
        virtual void closeEvent(QCloseEvent* event);
        virtual void contextMenuEvent(QContextMenuEvent* event);
        virtual void dragEnterEvent(QDragEnterEvent* event);
        virtual void dragLeaveEvent(QDragLeaveEvent* event);
        virtual void dragMoveEvent(QDragMoveEvent* event);
        virtual void dropEvent(QDropEvent* event);
        virtual void focusInEvent(QFocusEvent* event);
        virtual bool focusNextPrevChild(bool next);
        virtual void focusOutEvent(QFocusEvent* event);
        virtual void hideEvent(QHideEvent* event);
        virtual void keyPressEvent(QKeyEvent* event);
        virtual void keyReleaseEvent(QKeyEvent* event);
        virtual void leaveEvent(QEvent* event);
        virtual void mouseDoubleClickEvent(QMouseEvent* event);
        virtual void mouseMoveEvent(QMouseEvent* event);
        virtual void mousePressEvent(QMouseEvent* event);
        virtual void mouseReleaseEvent(QMouseEvent* event);
        virtual void moveEvent(QMoveEvent* event);
        virtual void resizeEvent(QResizeEvent* event);
        virtual void showEvent(QShowEvent* event);
        virtual void tabletEvent(QTabletEvent* event);
        virtual void wheelEvent(QWheelEvent* event);
        virtual int metric(QPaintDevice::PaintDeviceMetric m) const;

    public:
        void changeEvent_pub(QEvent* ev) { changeEvent(ev); }

        void changeEvent_pub_parent(QEvent* ev) { QFrame::changeEvent(ev); }

        bool event_pub(QEvent* e) { return event(e); }

        bool event_pub_parent(QEvent* e) { return QFrame::event(e); }

        void paintEvent_pub(QPaintEvent* _p14) { paintEvent(_p14); }

        void paintEvent_pub_parent(QPaintEvent* _p14)
        {
            QFrame::paintEvent(_p14);
        }

        void closeEvent_pub(QCloseEvent* event) { closeEvent(event); }

        void closeEvent_pub_parent(QCloseEvent* event)
        {
            QFrame::closeEvent(event);
        }

        void contextMenuEvent_pub(QContextMenuEvent* event)
        {
            contextMenuEvent(event);
        }

        void contextMenuEvent_pub_parent(QContextMenuEvent* event)
        {
            QFrame::contextMenuEvent(event);
        }

        void dragEnterEvent_pub(QDragEnterEvent* event)
        {
            dragEnterEvent(event);
        }

        void dragEnterEvent_pub_parent(QDragEnterEvent* event)
        {
            QFrame::dragEnterEvent(event);
        }

        void dragLeaveEvent_pub(QDragLeaveEvent* event)
        {
            dragLeaveEvent(event);
        }

        void dragLeaveEvent_pub_parent(QDragLeaveEvent* event)
        {
            QFrame::dragLeaveEvent(event);
        }

        void dragMoveEvent_pub(QDragMoveEvent* event) { dragMoveEvent(event); }

        void dragMoveEvent_pub_parent(QDragMoveEvent* event)
        {
            QFrame::dragMoveEvent(event);
        }

        void dropEvent_pub(QDropEvent* event) { dropEvent(event); }

        void dropEvent_pub_parent(QDropEvent* event)
        {
            QFrame::dropEvent(event);
        }

        void focusInEvent_pub(QFocusEvent* event) { focusInEvent(event); }

        void focusInEvent_pub_parent(QFocusEvent* event)
        {
            QFrame::focusInEvent(event);
        }

        bool focusNextPrevChild_pub(bool next)
        {
            return focusNextPrevChild(next);
        }

        bool focusNextPrevChild_pub_parent(bool next)
        {
            return QFrame::focusNextPrevChild(next);
        }

        void focusOutEvent_pub(QFocusEvent* event) { focusOutEvent(event); }

        void focusOutEvent_pub_parent(QFocusEvent* event)
        {
            QFrame::focusOutEvent(event);
        }

        void hideEvent_pub(QHideEvent* event) { hideEvent(event); }

        void hideEvent_pub_parent(QHideEvent* event)
        {
            QFrame::hideEvent(event);
        }

        void keyPressEvent_pub(QKeyEvent* event) { keyPressEvent(event); }

        void keyPressEvent_pub_parent(QKeyEvent* event)
        {
            QFrame::keyPressEvent(event);
        }

        void keyReleaseEvent_pub(QKeyEvent* event) { keyReleaseEvent(event); }

        void keyReleaseEvent_pub_parent(QKeyEvent* event)
        {
            QFrame::keyReleaseEvent(event);
        }

        void leaveEvent_pub(QEvent* event) { leaveEvent(event); }

        void leaveEvent_pub_parent(QEvent* event) { QFrame::leaveEvent(event); }

        void mouseDoubleClickEvent_pub(QMouseEvent* event)
        {
            mouseDoubleClickEvent(event);
        }

        void mouseDoubleClickEvent_pub_parent(QMouseEvent* event)
        {
            QFrame::mouseDoubleClickEvent(event);
        }

        void mouseMoveEvent_pub(QMouseEvent* event) { mouseMoveEvent(event); }

        void mouseMoveEvent_pub_parent(QMouseEvent* event)
        {
            QFrame::mouseMoveEvent(event);
        }

        void mousePressEvent_pub(QMouseEvent* event) { mousePressEvent(event); }

        void mousePressEvent_pub_parent(QMouseEvent* event)
        {
            QFrame::mousePressEvent(event);
        }

        void mouseReleaseEvent_pub(QMouseEvent* event)
        {
            mouseReleaseEvent(event);
        }

        void mouseReleaseEvent_pub_parent(QMouseEvent* event)
        {
            QFrame::mouseReleaseEvent(event);
        }

        void moveEvent_pub(QMoveEvent* event) { moveEvent(event); }

        void moveEvent_pub_parent(QMoveEvent* event)
        {
            QFrame::moveEvent(event);
        }

        void resizeEvent_pub(QResizeEvent* event) { resizeEvent(event); }

        void resizeEvent_pub_parent(QResizeEvent* event)
        {
            QFrame::resizeEvent(event);
        }

        void showEvent_pub(QShowEvent* event) { showEvent(event); }

        void showEvent_pub_parent(QShowEvent* event)
        {
            QFrame::showEvent(event);
        }

        void tabletEvent_pub(QTabletEvent* event) { tabletEvent(event); }

        void tabletEvent_pub_parent(QTabletEvent* event)
        {
            QFrame::tabletEvent(event);
        }

        void wheelEvent_pub(QWheelEvent* event) { wheelEvent(event); }

        void wheelEvent_pub_parent(QWheelEvent* event)
        {
            QFrame::wheelEvent(event);
        }

        int metric_pub(QPaintDevice::PaintDeviceMetric m) const
        {
            return metric(m);
        }

        int metric_pub_parent(QPaintDevice::PaintDeviceMetric m) const
        {
            return QFrame::metric(m);
        }

    public:
        const QFrameType* _baseType;
        ClassInstance* _obj;
        const CallEnvironment* _env;
    };

    inline ClassInstance*
    QFrameType::cachedInstance(const QFrameType::MuQtType* obj)
    {
        return obj->_obj;
    }

} // namespace Mu

#endif // __MuQt__QFrameType__h__
