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

#include <MuQt6/qtUtils.h>
#include <MuQt6/QPointerEventType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QSvgWidget>
#include <QtNetwork/QtNetwork>
#include <MuQt6/QWidgetType.h>
#include <MuQt6/QActionType.h>
#include <MuQt6/QIconType.h>
#include <Mu/BaseFunctions.h>
#include <Mu/Alias.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/Thread.h>
#include <Mu/ClassInstance.h>
#include <Mu/Function.h>
#include <Mu/MemberFunction.h>
#include <Mu/MemberVariable.h>
#include <Mu/Node.h>
#include <Mu/Exception.h>
#include <Mu/ParameterVariable.h>
#include <Mu/ReferenceType.h>
#include <Mu/Value.h>
#include <MuLang/MuLangContext.h>
#include <MuLang/StringType.h>

namespace Mu
{
    using namespace std;

    QPointerEventType::QPointerEventType(Context* c, const char* name,
                                         Class* super)
        : Class(c, name, super)
    {
    }

    QPointerEventType::~QPointerEventType() {}

    //----------------------------------------------------------------------
    //  PRE-COMPILED FUNCTIONS

    bool qt_QPointerEvent_allPointsAccepted_bool_QPointerEvent(
        Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QPointerEvent* arg0 = getqpointer<QPointerEventType>(param_this);
        return arg0->allPointsAccepted();
    }

    bool qt_QPointerEvent_allPointsGrabbed_bool_QPointerEvent(
        Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QPointerEvent* arg0 = getqpointer<QPointerEventType>(param_this);
        return arg0->allPointsGrabbed();
    }

    int qt_QPointerEvent_pointerType_int_QPointerEvent(Mu::Thread& NODE_THREAD,
                                                       Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QPointerEvent* arg0 = getqpointer<QPointerEventType>(param_this);
        return int(arg0->pointerType());
    }

    void qt_QPointerEvent_setAccepted_void_QPointerEvent_bool(
        Mu::Thread& NODE_THREAD, Pointer param_this, bool param_accepted)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QPointerEvent* arg0 = getqpointer<QPointerEventType>(param_this);
        bool arg1 = (bool)(param_accepted);
        arg0->setAccepted(arg1);
        setqpointer<QPointerEventType>(param_this, arg0);
    }

    static NODE_IMPLEMENTATION(_n_allPointsAccepted0, bool)
    {
        NODE_RETURN(qt_QPointerEvent_allPointsAccepted_bool_QPointerEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_allPointsGrabbed0, bool)
    {
        NODE_RETURN(qt_QPointerEvent_allPointsGrabbed_bool_QPointerEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_pointerType0, int)
    {
        NODE_RETURN(qt_QPointerEvent_pointerType_int_QPointerEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_setAccepted0, void)
    {
        qt_QPointerEvent_setAccepted_void_QPointerEvent_bool(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, bool));
    }

    void QPointerEventType::load()
    {
        USING_MU_FUNCTION_SYMBOLS;
        MuLangContext* c = static_cast<MuLangContext*>(context());
        Module* global = globalModule();

        const string typeName = name();
        const string refTypeName = typeName + "&";
        const string fullTypeName = fullyQualifiedName();
        const string fullRefTypeName = fullTypeName + "&";
        const char* tn = typeName.c_str();
        const char* ftn = fullTypeName.c_str();
        const char* rtn = refTypeName.c_str();
        const char* frtn = fullRefTypeName.c_str();

        scope()->addSymbols(new ReferenceType(c, rtn, this),

                            new Function(c, tn, BaseFunctions::dereference,
                                         Cast, Return, ftn, Args, frtn, End),

                            EndArguments);

        addSymbols(new Function(c, "__allocate", BaseFunctions::classAllocate,
                                None, Return, ftn, End),

                   new MemberVariable(c, "native", "qt.NativeObject"),

                   EndArguments);

        addSymbols(EndArguments);

        addSymbols(
            // enums
            // member functions
            // MISSING: addPassiveGrabber (bool; QPointerEvent this, "const
            // QEventPoint &" point, QObject grabber)
            new Function(c, "allPointsAccepted", _n_allPointsAccepted0, None,
                         Compiled,
                         qt_QPointerEvent_allPointsAccepted_bool_QPointerEvent,
                         Return, "bool", Parameters,
                         new Param(c, "this", "qt.QPointerEvent"), End),
            new Function(c, "allPointsGrabbed", _n_allPointsGrabbed0, None,
                         Compiled,
                         qt_QPointerEvent_allPointsGrabbed_bool_QPointerEvent,
                         Return, "bool", Parameters,
                         new Param(c, "this", "qt.QPointerEvent"), End),
            // MISSING: clearPassiveGrabbers (void; QPointerEvent this, "const
            // QEventPoint &" point) MISSING: exclusiveGrabber (QObject;
            // QPointerEvent this, "const QEventPoint &" point) MISSING:
            // passiveGrabbers ("QList<QPointer<QObject>>"; QPointerEvent this,
            // "const QEventPoint &" point) MISSING: point ("QEventPoint &";
            // QPointerEvent this, "qsizetype" i) MISSING: pointById
            // ("QEventPoint *"; QPointerEvent this, int id) MISSING: pointCount
            // ("qsizetype"; QPointerEvent this)
            new Function(c, "pointerType", _n_pointerType0, None, Compiled,
                         qt_QPointerEvent_pointerType_int_QPointerEvent, Return,
                         "int", Parameters,
                         new Param(c, "this", "qt.QPointerEvent"), End),
            // MISSING: pointingDevice ("const QPointingDevice *"; QPointerEvent
            // this) MISSING: points ("const QList<QEventPoint> &";
            // QPointerEvent this) MISSING: removePassiveGrabber (bool;
            // QPointerEvent this, "const QEventPoint &" point, QObject grabber)
            // MISSING: setExclusiveGrabber (void; QPointerEvent this, "const
            // QEventPoint &" point, QObject exclusiveGrabber)
            new MemberFunction(
                c, "setAccepted", _n_setAccepted0, None, Compiled,
                qt_QPointerEvent_setAccepted_void_QPointerEvent_bool, Return,
                "void", Parameters, new Param(c, "this", "qt.QPointerEvent"),
                new Param(c, "accepted", "bool"), End),
            // static functions
            EndArguments);
        globalScope()->addSymbols(EndArguments);
        scope()->addSymbols(EndArguments);
    }

} // namespace Mu
