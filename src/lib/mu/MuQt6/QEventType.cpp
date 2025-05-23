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
#include <MuQt6/QEventType.h>
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

    QEventType::QEventType(Context* c, const char* name, Class* super)
        : Class(c, name, super)
    {
    }

    QEventType::~QEventType() {}

    //----------------------------------------------------------------------
    //  PRE-COMPILED FUNCTIONS

    Pointer qt_QEvent_QEvent_QEvent_QEvent_int(Mu::Thread& NODE_THREAD,
                                               Pointer param_this,
                                               int param_type)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QEvent::Type arg1 = (QEvent::Type)(param_type);
        setqpointer<QEventType>(param_this, new QEvent(arg1));
        return param_this;
    }

    void qt_QEvent_accept_void_QEvent(Mu::Thread& NODE_THREAD,
                                      Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QEvent* arg0 = getqpointer<QEventType>(param_this);
        arg0->accept();
        setqpointer<QEventType>(param_this, arg0);
    }

    Pointer qt_QEvent_clone_QEvent_QEvent(Mu::Thread& NODE_THREAD,
                                          Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QEvent* arg0 = getqpointer<QEventType>(param_this);
        return makeqpointer<QEventType>(c, arg0->clone(), "qt.QEvent");
    }

    void qt_QEvent_ignore_void_QEvent(Mu::Thread& NODE_THREAD,
                                      Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QEvent* arg0 = getqpointer<QEventType>(param_this);
        arg0->ignore();
        setqpointer<QEventType>(param_this, arg0);
    }

    bool qt_QEvent_isInputEvent_bool_QEvent(Mu::Thread& NODE_THREAD,
                                            Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QEvent* arg0 = getqpointer<QEventType>(param_this);
        return arg0->isInputEvent();
    }

    bool qt_QEvent_isPointerEvent_bool_QEvent(Mu::Thread& NODE_THREAD,
                                              Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QEvent* arg0 = getqpointer<QEventType>(param_this);
        return arg0->isPointerEvent();
    }

    bool qt_QEvent_isSinglePointEvent_bool_QEvent(Mu::Thread& NODE_THREAD,
                                                  Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QEvent* arg0 = getqpointer<QEventType>(param_this);
        return arg0->isSinglePointEvent();
    }

    void qt_QEvent_setAccepted_void_QEvent_bool(Mu::Thread& NODE_THREAD,
                                                Pointer param_this,
                                                bool param_accepted)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QEvent* arg0 = getqpointer<QEventType>(param_this);
        bool arg1 = (bool)(param_accepted);
        arg0->setAccepted(arg1);
        setqpointer<QEventType>(param_this, arg0);
    }

    bool qt_QEvent_spontaneous_bool_QEvent(Mu::Thread& NODE_THREAD,
                                           Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QEvent* arg0 = getqpointer<QEventType>(param_this);
        return arg0->spontaneous();
    }

    int qt_QEvent_type_int_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QEvent* arg0 = getqpointer<QEventType>(param_this);
        return int(arg0->type());
    }

    int qt_QEvent_registerEventType_int_int(Mu::Thread& NODE_THREAD,
                                            int param_hint)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        int arg0 = (int)(param_hint);
        return QEvent::registerEventType(arg0);
    }

    static NODE_IMPLEMENTATION(_n_QEvent0, Pointer)
    {
        NODE_RETURN(qt_QEvent_QEvent_QEvent_QEvent_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_accept0, void)
    {
        qt_QEvent_accept_void_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_clone0, Pointer)
    {
        NODE_RETURN(qt_QEvent_clone_QEvent_QEvent(NODE_THREAD,
                                                  NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_ignore0, void)
    {
        qt_QEvent_ignore_void_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_isInputEvent0, bool)
    {
        NODE_RETURN(qt_QEvent_isInputEvent_bool_QEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isPointerEvent0, bool)
    {
        NODE_RETURN(qt_QEvent_isPointerEvent_bool_QEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isSinglePointEvent0, bool)
    {
        NODE_RETURN(qt_QEvent_isSinglePointEvent_bool_QEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_setAccepted0, void)
    {
        qt_QEvent_setAccepted_void_QEvent_bool(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, bool));
    }

    static NODE_IMPLEMENTATION(_n_spontaneous0, bool)
    {
        NODE_RETURN(qt_QEvent_spontaneous_bool_QEvent(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_type0, int)
    {
        NODE_RETURN(qt_QEvent_type_int_QEvent(NODE_THREAD,
                                              NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_registerEventType0, int)
    {
        NODE_RETURN(
            qt_QEvent_registerEventType_int_int(NODE_THREAD, NODE_ARG(0, int)));
    }

    void QEventType::load()
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

        addSymbols(
            new Alias(c, "Type", "int"),
            new SymbolicConstant(c, "None", "int", Value(int(QEvent::None))),
            new SymbolicConstant(c, "ActionAdded", "int",
                                 Value(int(QEvent::ActionAdded))),
            new SymbolicConstant(c, "ActionChanged", "int",
                                 Value(int(QEvent::ActionChanged))),
            new SymbolicConstant(c, "ActionRemoved", "int",
                                 Value(int(QEvent::ActionRemoved))),
            new SymbolicConstant(c, "ActivationChange", "int",
                                 Value(int(QEvent::ActivationChange))),
            new SymbolicConstant(c, "ApplicationActivate", "int",
                                 Value(int(QEvent::ApplicationActivate))),
            new SymbolicConstant(c, "ApplicationActivated", "int",
                                 Value(int(QEvent::ApplicationActivated))),
            new SymbolicConstant(c, "ApplicationDeactivate", "int",
                                 Value(int(QEvent::ApplicationDeactivate))),
            new SymbolicConstant(c, "ApplicationFontChange", "int",
                                 Value(int(QEvent::ApplicationFontChange))),
            new SymbolicConstant(
                c, "ApplicationLayoutDirectionChange", "int",
                Value(int(QEvent::ApplicationLayoutDirectionChange))),
            new SymbolicConstant(c, "ApplicationPaletteChange", "int",
                                 Value(int(QEvent::ApplicationPaletteChange))),
            new SymbolicConstant(c, "ApplicationStateChange", "int",
                                 Value(int(QEvent::ApplicationStateChange))),
            new SymbolicConstant(
                c, "ApplicationWindowIconChange", "int",
                Value(int(QEvent::ApplicationWindowIconChange))),
            new SymbolicConstant(c, "ChildAdded", "int",
                                 Value(int(QEvent::ChildAdded))),
            new SymbolicConstant(c, "ChildPolished", "int",
                                 Value(int(QEvent::ChildPolished))),
            new SymbolicConstant(c, "ChildRemoved", "int",
                                 Value(int(QEvent::ChildRemoved))),
            new SymbolicConstant(c, "Clipboard", "int",
                                 Value(int(QEvent::Clipboard))),
            new SymbolicConstant(c, "Close", "int", Value(int(QEvent::Close))),
            new SymbolicConstant(c, "CloseSoftwareInputPanel", "int",
                                 Value(int(QEvent::CloseSoftwareInputPanel))),
            new SymbolicConstant(c, "ContentsRectChange", "int",
                                 Value(int(QEvent::ContentsRectChange))),
            new SymbolicConstant(c, "ContextMenu", "int",
                                 Value(int(QEvent::ContextMenu))),
            new SymbolicConstant(c, "CursorChange", "int",
                                 Value(int(QEvent::CursorChange))),
            new SymbolicConstant(c, "DeferredDelete", "int",
                                 Value(int(QEvent::DeferredDelete))),
            new SymbolicConstant(c, "DragEnter", "int",
                                 Value(int(QEvent::DragEnter))),
            new SymbolicConstant(c, "DragLeave", "int",
                                 Value(int(QEvent::DragLeave))),
            new SymbolicConstant(c, "DragMove", "int",
                                 Value(int(QEvent::DragMove))),
            new SymbolicConstant(c, "Drop", "int", Value(int(QEvent::Drop))),
            new SymbolicConstant(c, "DynamicPropertyChange", "int",
                                 Value(int(QEvent::DynamicPropertyChange))),
            new SymbolicConstant(c, "EnabledChange", "int",
                                 Value(int(QEvent::EnabledChange))),
            new SymbolicConstant(c, "Enter", "int", Value(int(QEvent::Enter))),
            new SymbolicConstant(c, "EnterWhatsThisMode", "int",
                                 Value(int(QEvent::EnterWhatsThisMode))),
            new SymbolicConstant(c, "Expose", "int",
                                 Value(int(QEvent::Expose))),
            new SymbolicConstant(c, "FileOpen", "int",
                                 Value(int(QEvent::FileOpen))),
            new SymbolicConstant(c, "FocusIn", "int",
                                 Value(int(QEvent::FocusIn))),
            new SymbolicConstant(c, "FocusOut", "int",
                                 Value(int(QEvent::FocusOut))),
            new SymbolicConstant(c, "FocusAboutToChange", "int",
                                 Value(int(QEvent::FocusAboutToChange))),
            new SymbolicConstant(c, "FontChange", "int",
                                 Value(int(QEvent::FontChange))),
            new SymbolicConstant(c, "Gesture", "int",
                                 Value(int(QEvent::Gesture))),
            new SymbolicConstant(c, "GestureOverride", "int",
                                 Value(int(QEvent::GestureOverride))),
            new SymbolicConstant(c, "GrabKeyboard", "int",
                                 Value(int(QEvent::GrabKeyboard))),
            new SymbolicConstant(c, "GrabMouse", "int",
                                 Value(int(QEvent::GrabMouse))),
            new SymbolicConstant(c, "GraphicsSceneContextMenu", "int",
                                 Value(int(QEvent::GraphicsSceneContextMenu))),
            new SymbolicConstant(c, "GraphicsSceneDragEnter", "int",
                                 Value(int(QEvent::GraphicsSceneDragEnter))),
            new SymbolicConstant(c, "GraphicsSceneDragLeave", "int",
                                 Value(int(QEvent::GraphicsSceneDragLeave))),
            new SymbolicConstant(c, "GraphicsSceneDragMove", "int",
                                 Value(int(QEvent::GraphicsSceneDragMove))),
            new SymbolicConstant(c, "GraphicsSceneDrop", "int",
                                 Value(int(QEvent::GraphicsSceneDrop))),
            new SymbolicConstant(c, "GraphicsSceneHelp", "int",
                                 Value(int(QEvent::GraphicsSceneHelp))),
            new SymbolicConstant(c, "GraphicsSceneHoverEnter", "int",
                                 Value(int(QEvent::GraphicsSceneHoverEnter))),
            new SymbolicConstant(c, "GraphicsSceneHoverLeave", "int",
                                 Value(int(QEvent::GraphicsSceneHoverLeave))),
            new SymbolicConstant(c, "GraphicsSceneHoverMove", "int",
                                 Value(int(QEvent::GraphicsSceneHoverMove))),
            new SymbolicConstant(
                c, "GraphicsSceneMouseDoubleClick", "int",
                Value(int(QEvent::GraphicsSceneMouseDoubleClick))),
            new SymbolicConstant(c, "GraphicsSceneMouseMove", "int",
                                 Value(int(QEvent::GraphicsSceneMouseMove))),
            new SymbolicConstant(c, "GraphicsSceneMousePress", "int",
                                 Value(int(QEvent::GraphicsSceneMousePress))),
            new SymbolicConstant(c, "GraphicsSceneMouseRelease", "int",
                                 Value(int(QEvent::GraphicsSceneMouseRelease))),
            new SymbolicConstant(c, "GraphicsSceneMove", "int",
                                 Value(int(QEvent::GraphicsSceneMove))),
            new SymbolicConstant(c, "GraphicsSceneResize", "int",
                                 Value(int(QEvent::GraphicsSceneResize))),
            new SymbolicConstant(c, "GraphicsSceneWheel", "int",
                                 Value(int(QEvent::GraphicsSceneWheel))),
            new SymbolicConstant(c, "GraphicsSceneLeave", "int",
                                 Value(int(QEvent::GraphicsSceneLeave))),
            new SymbolicConstant(c, "Hide", "int", Value(int(QEvent::Hide))),
            new SymbolicConstant(c, "HideToParent", "int",
                                 Value(int(QEvent::HideToParent))),
            new SymbolicConstant(c, "HoverEnter", "int",
                                 Value(int(QEvent::HoverEnter))),
            new SymbolicConstant(c, "HoverLeave", "int",
                                 Value(int(QEvent::HoverLeave))),
            new SymbolicConstant(c, "HoverMove", "int",
                                 Value(int(QEvent::HoverMove))),
            new SymbolicConstant(c, "IconDrag", "int",
                                 Value(int(QEvent::IconDrag))),
            new SymbolicConstant(c, "IconTextChange", "int",
                                 Value(int(QEvent::IconTextChange))),
            new SymbolicConstant(c, "InputMethod", "int",
                                 Value(int(QEvent::InputMethod))),
            new SymbolicConstant(c, "InputMethodQuery", "int",
                                 Value(int(QEvent::InputMethodQuery))),
            new SymbolicConstant(c, "KeyboardLayoutChange", "int",
                                 Value(int(QEvent::KeyboardLayoutChange))),
            new SymbolicConstant(c, "KeyPress", "int",
                                 Value(int(QEvent::KeyPress))),
            new SymbolicConstant(c, "KeyRelease", "int",
                                 Value(int(QEvent::KeyRelease))),
            new SymbolicConstant(c, "LanguageChange", "int",
                                 Value(int(QEvent::LanguageChange))),
            new SymbolicConstant(c, "LayoutDirectionChange", "int",
                                 Value(int(QEvent::LayoutDirectionChange))),
            new SymbolicConstant(c, "LayoutRequest", "int",
                                 Value(int(QEvent::LayoutRequest))),
            new SymbolicConstant(c, "Leave", "int", Value(int(QEvent::Leave))),
            new SymbolicConstant(c, "LeaveWhatsThisMode", "int",
                                 Value(int(QEvent::LeaveWhatsThisMode))),
            new SymbolicConstant(c, "LocaleChange", "int",
                                 Value(int(QEvent::LocaleChange))),
            new SymbolicConstant(
                c, "NonClientAreaMouseButtonDblClick", "int",
                Value(int(QEvent::NonClientAreaMouseButtonDblClick))),
            new SymbolicConstant(
                c, "NonClientAreaMouseButtonPress", "int",
                Value(int(QEvent::NonClientAreaMouseButtonPress))),
            new SymbolicConstant(
                c, "NonClientAreaMouseButtonRelease", "int",
                Value(int(QEvent::NonClientAreaMouseButtonRelease))),
            new SymbolicConstant(c, "NonClientAreaMouseMove", "int",
                                 Value(int(QEvent::NonClientAreaMouseMove))),
            new SymbolicConstant(c, "MacSizeChange", "int",
                                 Value(int(QEvent::MacSizeChange))),
            new SymbolicConstant(c, "MetaCall", "int",
                                 Value(int(QEvent::MetaCall))),
            new SymbolicConstant(c, "ModifiedChange", "int",
                                 Value(int(QEvent::ModifiedChange))),
            new SymbolicConstant(c, "MouseButtonDblClick", "int",
                                 Value(int(QEvent::MouseButtonDblClick))),
            new SymbolicConstant(c, "MouseButtonPress", "int",
                                 Value(int(QEvent::MouseButtonPress))),
            new SymbolicConstant(c, "MouseButtonRelease", "int",
                                 Value(int(QEvent::MouseButtonRelease))),
            new SymbolicConstant(c, "MouseMove", "int",
                                 Value(int(QEvent::MouseMove))),
            new SymbolicConstant(c, "MouseTrackingChange", "int",
                                 Value(int(QEvent::MouseTrackingChange))),
            new SymbolicConstant(c, "Move", "int", Value(int(QEvent::Move))),
            new SymbolicConstant(c, "NativeGesture", "int",
                                 Value(int(QEvent::NativeGesture))),
            new SymbolicConstant(c, "OrientationChange", "int",
                                 Value(int(QEvent::OrientationChange))),
            new SymbolicConstant(c, "Paint", "int", Value(int(QEvent::Paint))),
            new SymbolicConstant(c, "PaletteChange", "int",
                                 Value(int(QEvent::PaletteChange))),
            new SymbolicConstant(c, "ParentAboutToChange", "int",
                                 Value(int(QEvent::ParentAboutToChange))),
            new SymbolicConstant(c, "ParentChange", "int",
                                 Value(int(QEvent::ParentChange))),
            new SymbolicConstant(c, "PlatformPanel", "int",
                                 Value(int(QEvent::PlatformPanel))),
            new SymbolicConstant(c, "PlatformSurface", "int",
                                 Value(int(QEvent::PlatformSurface))),
            new SymbolicConstant(c, "Polish", "int",
                                 Value(int(QEvent::Polish))),
            new SymbolicConstant(c, "PolishRequest", "int",
                                 Value(int(QEvent::PolishRequest))),
            new SymbolicConstant(c, "QueryWhatsThis", "int",
                                 Value(int(QEvent::QueryWhatsThis))),
            new SymbolicConstant(c, "Quit", "int", Value(int(QEvent::Quit))),
            new SymbolicConstant(c, "ReadOnlyChange", "int",
                                 Value(int(QEvent::ReadOnlyChange))),
            new SymbolicConstant(c, "RequestSoftwareInputPanel", "int",
                                 Value(int(QEvent::RequestSoftwareInputPanel))),
            new SymbolicConstant(c, "Resize", "int",
                                 Value(int(QEvent::Resize))),
            new SymbolicConstant(c, "ScrollPrepare", "int",
                                 Value(int(QEvent::ScrollPrepare))),
            new SymbolicConstant(c, "Scroll", "int",
                                 Value(int(QEvent::Scroll))),
            new SymbolicConstant(c, "Shortcut", "int",
                                 Value(int(QEvent::Shortcut))),
            new SymbolicConstant(c, "ShortcutOverride", "int",
                                 Value(int(QEvent::ShortcutOverride))),
            new SymbolicConstant(c, "Show", "int", Value(int(QEvent::Show))),
            new SymbolicConstant(c, "ShowToParent", "int",
                                 Value(int(QEvent::ShowToParent))),
            new SymbolicConstant(c, "SockAct", "int",
                                 Value(int(QEvent::SockAct))),
            new SymbolicConstant(c, "StateMachineSignal", "int",
                                 Value(int(QEvent::StateMachineSignal))),
            new SymbolicConstant(c, "StateMachineWrapped", "int",
                                 Value(int(QEvent::StateMachineWrapped))),
            new SymbolicConstant(c, "StatusTip", "int",
                                 Value(int(QEvent::StatusTip))),
            new SymbolicConstant(c, "StyleChange", "int",
                                 Value(int(QEvent::StyleChange))),
            new SymbolicConstant(c, "TabletMove", "int",
                                 Value(int(QEvent::TabletMove))),
            new SymbolicConstant(c, "TabletPress", "int",
                                 Value(int(QEvent::TabletPress))),
            new SymbolicConstant(c, "TabletRelease", "int",
                                 Value(int(QEvent::TabletRelease))),
            new SymbolicConstant(c, "TabletEnterProximity", "int",
                                 Value(int(QEvent::TabletEnterProximity))),
            new SymbolicConstant(c, "TabletLeaveProximity", "int",
                                 Value(int(QEvent::TabletLeaveProximity))),
            new SymbolicConstant(c, "TabletTrackingChange", "int",
                                 Value(int(QEvent::TabletTrackingChange))),
            new SymbolicConstant(c, "ThreadChange", "int",
                                 Value(int(QEvent::ThreadChange))),
            new SymbolicConstant(c, "Timer", "int", Value(int(QEvent::Timer))),
            new SymbolicConstant(c, "ToolBarChange", "int",
                                 Value(int(QEvent::ToolBarChange))),
            new SymbolicConstant(c, "ToolTip", "int",
                                 Value(int(QEvent::ToolTip))),
            new SymbolicConstant(c, "ToolTipChange", "int",
                                 Value(int(QEvent::ToolTipChange))),
            new SymbolicConstant(c, "TouchBegin", "int",
                                 Value(int(QEvent::TouchBegin))),
            new SymbolicConstant(c, "TouchCancel", "int",
                                 Value(int(QEvent::TouchCancel))),
            new SymbolicConstant(c, "TouchEnd", "int",
                                 Value(int(QEvent::TouchEnd))),
            new SymbolicConstant(c, "TouchUpdate", "int",
                                 Value(int(QEvent::TouchUpdate))),
            new SymbolicConstant(c, "UngrabKeyboard", "int",
                                 Value(int(QEvent::UngrabKeyboard))),
            new SymbolicConstant(c, "UngrabMouse", "int",
                                 Value(int(QEvent::UngrabMouse))),
            new SymbolicConstant(c, "UpdateLater", "int",
                                 Value(int(QEvent::UpdateLater))),
            new SymbolicConstant(c, "UpdateRequest", "int",
                                 Value(int(QEvent::UpdateRequest))),
            new SymbolicConstant(c, "WhatsThis", "int",
                                 Value(int(QEvent::WhatsThis))),
            new SymbolicConstant(c, "WhatsThisClicked", "int",
                                 Value(int(QEvent::WhatsThisClicked))),
            new SymbolicConstant(c, "Wheel", "int", Value(int(QEvent::Wheel))),
            new SymbolicConstant(c, "WinEventAct", "int",
                                 Value(int(QEvent::WinEventAct))),
            new SymbolicConstant(c, "WindowActivate", "int",
                                 Value(int(QEvent::WindowActivate))),
            new SymbolicConstant(c, "WindowBlocked", "int",
                                 Value(int(QEvent::WindowBlocked))),
            new SymbolicConstant(c, "WindowDeactivate", "int",
                                 Value(int(QEvent::WindowDeactivate))),
            new SymbolicConstant(c, "WindowIconChange", "int",
                                 Value(int(QEvent::WindowIconChange))),
            new SymbolicConstant(c, "WindowStateChange", "int",
                                 Value(int(QEvent::WindowStateChange))),
            new SymbolicConstant(c, "WindowTitleChange", "int",
                                 Value(int(QEvent::WindowTitleChange))),
            new SymbolicConstant(c, "WindowUnblocked", "int",
                                 Value(int(QEvent::WindowUnblocked))),
            new SymbolicConstant(c, "WinIdChange", "int",
                                 Value(int(QEvent::WinIdChange))),
            new SymbolicConstant(c, "ZOrderChange", "int",
                                 Value(int(QEvent::ZOrderChange))),
            EndArguments);

        addSymbols(
            // enums
            // member functions
            new Function(c, "QEvent", _n_QEvent0, None, Compiled,
                         qt_QEvent_QEvent_QEvent_QEvent_int, Return,
                         "qt.QEvent", Parameters,
                         new Param(c, "this", "qt.QEvent"),
                         new Param(c, "type", "int"), End),
            new Function(c, "accept", _n_accept0, None, Compiled,
                         qt_QEvent_accept_void_QEvent, Return, "void",
                         Parameters, new Param(c, "this", "qt.QEvent"), End),
            new MemberFunction(c, "clone", _n_clone0, None, Compiled,
                               qt_QEvent_clone_QEvent_QEvent, Return,
                               "qt.QEvent", Parameters,
                               new Param(c, "this", "qt.QEvent"), End),
            new Function(c, "ignore", _n_ignore0, None, Compiled,
                         qt_QEvent_ignore_void_QEvent, Return, "void",
                         Parameters, new Param(c, "this", "qt.QEvent"), End),
            // PROP: isAccepted (bool; QEvent this)
            new Function(c, "isInputEvent", _n_isInputEvent0, None, Compiled,
                         qt_QEvent_isInputEvent_bool_QEvent, Return, "bool",
                         Parameters, new Param(c, "this", "qt.QEvent"), End),
            new Function(c, "isPointerEvent", _n_isPointerEvent0, None,
                         Compiled, qt_QEvent_isPointerEvent_bool_QEvent, Return,
                         "bool", Parameters, new Param(c, "this", "qt.QEvent"),
                         End),
            new Function(c, "isSinglePointEvent", _n_isSinglePointEvent0, None,
                         Compiled, qt_QEvent_isSinglePointEvent_bool_QEvent,
                         Return, "bool", Parameters,
                         new Param(c, "this", "qt.QEvent"), End),
            new MemberFunction(c, "setAccepted", _n_setAccepted0, None,
                               Compiled, qt_QEvent_setAccepted_void_QEvent_bool,
                               Return, "void", Parameters,
                               new Param(c, "this", "qt.QEvent"),
                               new Param(c, "accepted", "bool"), End),
            new Function(c, "spontaneous", _n_spontaneous0, None, Compiled,
                         qt_QEvent_spontaneous_bool_QEvent, Return, "bool",
                         Parameters, new Param(c, "this", "qt.QEvent"), End),
            new Function(c, "type", _n_type0, None, Compiled,
                         qt_QEvent_type_int_QEvent, Return, "int", Parameters,
                         new Param(c, "this", "qt.QEvent"), End),
            // static functions
            new Function(c, "registerEventType", _n_registerEventType0, None,
                         Compiled, qt_QEvent_registerEventType_int_int, Return,
                         "int", Parameters,
                         new Param(c, "hint", "int", Value((int)-1)), End),
            EndArguments);
        globalScope()->addSymbols(EndArguments);
        scope()->addSymbols(EndArguments);
    }

} // namespace Mu
