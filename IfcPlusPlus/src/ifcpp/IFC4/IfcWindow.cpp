/* -*-c++-*- IfcPlusPlus - www.ifcplusplus.com - Copyright (C) 2011 Fabian Gerold
*
* This library is open source and may be redistributed and/or modified under  
* the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or 
* (at your option) any later version.  The full license is in LICENSE file
* included with this distribution, and on the openscenegraph.org website.
* 
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
* OpenSceneGraph Public License for more details.
*/
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IfcPPEntityEnums.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcIdentifier.h"
#include "include/IfcLabel.h"
#include "include/IfcObjectPlacement.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcPositiveLengthMeasure.h"
#include "include/IfcProductRepresentation.h"
#include "include/IfcRelAggregates.h"
#include "include/IfcRelAssigns.h"
#include "include/IfcRelAssignsToProduct.h"
#include "include/IfcRelAssociates.h"
#include "include/IfcRelConnectsElements.h"
#include "include/IfcRelConnectsWithRealizingElements.h"
#include "include/IfcRelContainedInSpatialStructure.h"
#include "include/IfcRelCoversBldgElements.h"
#include "include/IfcRelDeclares.h"
#include "include/IfcRelDefinesByObject.h"
#include "include/IfcRelDefinesByProperties.h"
#include "include/IfcRelDefinesByType.h"
#include "include/IfcRelFillsElement.h"
#include "include/IfcRelInterferesElements.h"
#include "include/IfcRelNests.h"
#include "include/IfcRelProjectsElement.h"
#include "include/IfcRelReferencedInSpatialStructure.h"
#include "include/IfcRelSpaceBoundary.h"
#include "include/IfcRelVoidsElement.h"
#include "include/IfcText.h"
#include "include/IfcWindow.h"
#include "include/IfcWindowTypeEnum.h"
#include "include/IfcWindowTypePartitioningEnum.h"

// ENTITY IfcWindow 
IfcWindow::IfcWindow() {}
IfcWindow::IfcWindow( int id ) { m_id = id; }
IfcWindow::~IfcWindow() {}
shared_ptr<IfcPPObject> IfcWindow::getDeepCopy()
{
	shared_ptr<IfcWindow> copy_self( new IfcWindow() );
	if( m_GlobalId ) { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy() ); }
	if( m_OwnerHistory ) { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy() ); }
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy() ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy() ); }
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy() ); }
	if( m_ObjectPlacement ) { copy_self->m_ObjectPlacement = dynamic_pointer_cast<IfcObjectPlacement>( m_ObjectPlacement->getDeepCopy() ); }
	if( m_Representation ) { copy_self->m_Representation = dynamic_pointer_cast<IfcProductRepresentation>( m_Representation->getDeepCopy() ); }
	if( m_Tag ) { copy_self->m_Tag = dynamic_pointer_cast<IfcIdentifier>( m_Tag->getDeepCopy() ); }
	if( m_OverallHeight ) { copy_self->m_OverallHeight = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_OverallHeight->getDeepCopy() ); }
	if( m_OverallWidth ) { copy_self->m_OverallWidth = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_OverallWidth->getDeepCopy() ); }
	if( m_PredefinedType ) { copy_self->m_PredefinedType = dynamic_pointer_cast<IfcWindowTypeEnum>( m_PredefinedType->getDeepCopy() ); }
	if( m_PartitioningType ) { copy_self->m_PartitioningType = dynamic_pointer_cast<IfcWindowTypePartitioningEnum>( m_PartitioningType->getDeepCopy() ); }
	if( m_UserDefinedPartitioningType ) { copy_self->m_UserDefinedPartitioningType = dynamic_pointer_cast<IfcLabel>( m_UserDefinedPartitioningType->getDeepCopy() ); }
	return copy_self;
}
void IfcWindow::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCWINDOW" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->getId(); } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ObjectPlacement ) { stream << "#" << m_ObjectPlacement->getId(); } else { stream << "*"; }
	stream << ",";
	if( m_Representation ) { stream << "#" << m_Representation->getId(); } else { stream << "*"; }
	stream << ",";
	if( m_Tag ) { m_Tag->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OverallHeight ) { m_OverallHeight->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OverallWidth ) { m_OverallWidth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PartitioningType ) { m_PartitioningType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_UserDefinedPartitioningType ) { m_UserDefinedPartitioningType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcWindow::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcWindow::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const int num_args = (int)args.size();
	if( num_args<13 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcWindow, expecting 13, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcPPException( strserr.str().c_str() ); }
	#ifdef _DEBUG
	if( num_args>13 ){ std::cout << "Wrong parameter count for entity IfcWindow, expecting 13, having " << num_args << ". Object id: " << getId() << std::endl; }
	#endif
	m_GlobalId = IfcGloballyUniqueId::createObjectFromStepData( args[0] );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromStepData( args[2] );
	m_Description = IfcText::createObjectFromStepData( args[3] );
	m_ObjectType = IfcLabel::createObjectFromStepData( args[4] );
	readEntityReference( args[5], m_ObjectPlacement, map );
	readEntityReference( args[6], m_Representation, map );
	m_Tag = IfcIdentifier::createObjectFromStepData( args[7] );
	m_OverallHeight = IfcPositiveLengthMeasure::createObjectFromStepData( args[8] );
	m_OverallWidth = IfcPositiveLengthMeasure::createObjectFromStepData( args[9] );
	m_PredefinedType = IfcWindowTypeEnum::createObjectFromStepData( args[10] );
	m_PartitioningType = IfcWindowTypePartitioningEnum::createObjectFromStepData( args[11] );
	m_UserDefinedPartitioningType = IfcLabel::createObjectFromStepData( args[12] );
}
void IfcWindow::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcBuildingElement::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "OverallHeight", m_OverallHeight ) );
	vec_attributes.push_back( std::make_pair( "OverallWidth", m_OverallWidth ) );
	vec_attributes.push_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
	vec_attributes.push_back( std::make_pair( "PartitioningType", m_PartitioningType ) );
	vec_attributes.push_back( std::make_pair( "UserDefinedPartitioningType", m_UserDefinedPartitioningType ) );
}
void IfcWindow::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcBuildingElement::getAttributesInverse( vec_attributes_inverse );
}
void IfcWindow::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcBuildingElement::setInverseCounterparts( ptr_self_entity );
}
void IfcWindow::unlinkSelf()
{
	IfcBuildingElement::unlinkSelf();
}
