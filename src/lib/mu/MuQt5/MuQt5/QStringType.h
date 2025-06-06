//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
#ifndef __MuQt__QStringType__h__
#define __MuQt__QStringType__h__
#include <iostream>
#include <Mu/Class.h>

namespace Mu
{

    //
    //  NOTE: file generated by qt2mu.py
    //

    class QStringType : public Class
    {
    public:
        //
        //  Types
        //

        typedef QString ValueType;

        class Instance : public ClassInstance
        {
        public:
            //
            //  Probably need some kind of finalizer for classes that are
            //  references (e.g. QIcon)
            //
            Instance(const Class*);
            QString value;
        };

        //
        //  Constructors
        //

        QStringType(Context* context, const char* name, Class* superClass = 0);
        virtual ~QStringType();

        //
        //  Class API
        //

        virtual void load();

        //
        //  Finalizer
        //

        static void registerFinalizer(void*);
        static void finalizer(void*, void*);
    };

} // namespace Mu

#endif // __MuQt__QStringType__h__
