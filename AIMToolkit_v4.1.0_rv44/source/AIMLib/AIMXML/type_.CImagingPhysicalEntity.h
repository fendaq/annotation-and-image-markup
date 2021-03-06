/*
Copyright (c) 2008-2013, Northwestern University
All rights reserved.
 
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
 
  Redistributions of source code must retain the above copyright notice,
  this list of conditions and the following disclaimer.
 
  Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.
 
  Neither the name of the Northwestern University nor the names of its contributors
  may be used to endorse or promote products derived from this software
  without specific prior written permission.
 
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CImagingPhysicalEntity
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CImagingPhysicalEntity

#include "type_.CEntity.h"


namespace AIMXML
{

class CImagingPhysicalEntity : public ::AIMXML::CEntity
{
public:
	AIMXML_EXPORT CImagingPhysicalEntity(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CImagingPhysicalEntity(CImagingPhysicalEntity const& init);
	void operator=(CImagingPhysicalEntity const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CImagingPhysicalEntity); }
	MemberElement<iso::CCD, _altova_mi_altova_CImagingPhysicalEntity_altova_typeCode> typeCode;
	struct typeCode { typedef Iterator<iso::CCD> iterator; };
	MemberElement<iso::CCD, _altova_mi_altova_CImagingPhysicalEntity_altova_questionTypeCode> questionTypeCode;
	struct questionTypeCode { typedef Iterator<iso::CCD> iterator; };
	MemberElement<iso::CBL, _altova_mi_altova_CImagingPhysicalEntity_altova_isPresent> isPresent;
	struct isPresent { typedef Iterator<iso::CBL> iterator; };
	MemberElement<iso::CREAL, _altova_mi_altova_CImagingPhysicalEntity_altova_annotatorConfidence> annotatorConfidence;
	struct annotatorConfidence { typedef Iterator<iso::CREAL> iterator; };
	MemberElement<iso::CST, _altova_mi_altova_CImagingPhysicalEntity_altova_label> label;
	struct label { typedef Iterator<iso::CST> iterator; };
	MemberElement<iso::CINT, _altova_mi_altova_CImagingPhysicalEntity_altova_questionIndex> questionIndex;
	struct questionIndex { typedef Iterator<iso::CINT> iterator; };
	MemberElement<iso::CST, _altova_mi_altova_CImagingPhysicalEntity_altova_comment> comment;
	struct comment { typedef Iterator<iso::CST> iterator; };
	MemberElement<CimagingPhysicalEntityCharacteristicCollectionType, _altova_mi_altova_CImagingPhysicalEntity_altova_imagingPhysicalEntityCharacteristicCollection> imagingPhysicalEntityCharacteristicCollection;
	struct imagingPhysicalEntityCharacteristicCollection { typedef Iterator<CimagingPhysicalEntityCharacteristicCollectionType> iterator; };
	MemberElement<CimagingObservationCharacteristicCollectionType2, _altova_mi_altova_CImagingPhysicalEntity_altova_imagingObservationCharacteristicCollection> imagingObservationCharacteristicCollection;
	struct imagingObservationCharacteristicCollection { typedef Iterator<CimagingObservationCharacteristicCollectionType2> iterator; };
	AIMXML_EXPORT void SetXsiType();
};


}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CImagingPhysicalEntity
