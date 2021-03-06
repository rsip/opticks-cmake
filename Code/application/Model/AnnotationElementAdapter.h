/*
 * The information in this file is
 * Copyright(c) 2007 Ball Aerospace & Technologies Corporation
 * and is subject to the terms and conditions of the
 * GNU Lesser General Public License Version 2.1
 * The license text is available from   
 * http://www.gnu.org/licenses/lgpl.html
 */

#ifndef ANNOTATIONELEMENTADAPTER_H
#define ANNOTATIONELEMENTADAPTER_H

#include "AnnotationElement.h"
#include "AnnotationElementImp.h"

class AnnotationElementAdapter : public AnnotationElement, public AnnotationElementImp
   ANNOTATIONELEMENTADAPTEREXTENSION_CLASSES
{
public:
   AnnotationElementAdapter(const DataDescriptorImp& descriptor, const std::string& id);
   ~AnnotationElementAdapter();

   // TypeAwareObject
   const std::string& getObjectType() const;
   bool isKindOf(const std::string& className) const;

   ANNOTATIONELEMENTADAPTER_METHODS(AnnotationElementImp)
};

#endif
