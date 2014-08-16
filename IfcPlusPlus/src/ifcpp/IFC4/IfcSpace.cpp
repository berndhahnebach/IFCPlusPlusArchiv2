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
#include "include/IfcElementCompositionEnum.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcLengthMeasure.h"
#include "include/IfcObjectPlacement.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcProductRepresentation.h"
#include "include/IfcRelAggregates.h"
#include "include/IfcRelAssigns.h"
#include "include/IfcRelAssignsToProduct.h"
#include "include/IfcRelAssociates.h"
#include "include/IfcRelContainedInSpatialStructure.h"
#include "include/IfcRelCoversSpaces.h"
#include "include/IfcRelDeclares.h"
#include "include/IfcRelDefinesByObject.h"
#include "include/IfcRelDefinesByProperties.h"
#include "include/IfcRelDefinesByType.h"
#include "include/IfcRelNests.h"
#include "include/IfcRelReferencedInSpatialStructure.h"
#include "include/IfcRelServicesBuildings.h"
#include "include/IfcRelSpaceBoundary.h"
#include "include/IfcSpace.h"
#include "include/IfcSpaceTypeEnum.h"
#include "include/IfcText.h"

// ENTITY IfcSpace 
IfcSpace::IfcSpace() {}
IfcSpace::IfcSpace( int id ) { m_id = id; }
IfcSpace::~IfcSpace() {}
shared_ptr<IfcPPObject> IfcSpace::getDeepCopy()
{
	shared_ptr<IfcSpace> copy_self( new IfcSpace() );
	if( m_GlobalId ) { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy() ); }
	if( m_OwnerHistory ) { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy() ); }
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy() ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy() ); }
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy() ); }
	if( m_ObjectPlacement ) { copy_self->m_ObjectPlacement = dynamic_pointer_cast<IfcObjectPlacement>( m_ObjectPlacement->getDeepCopy() ); }
	if( m_Representation ) { copy_self->m_Representation = dynamic_pointer_cast<IfcProductRepresentation>( m_Representation->getDeepCopy() ); }
	if( m_LongName ) { copy_self->m_LongName = dynamic_pointer_cast<IfcLabel>( m_LongName->getDeepCopy() ); }
	if( m_CompositionType ) { copy_self->m_CompositionType = dynamic_pointer_cast<IfcElementCompositionEnum>( m_CompositionType->getDeepCopy() ); }
	if( m_PredefinedType ) { copy_self->m_PredefinedType = dynamic_pointer_cast<IfcSpaceTypeEnum>( m_PredefinedType->getDeepCopy() ); }
	if( m_ElevationWithFlooring ) { copy_self->m_ElevationWithFlooring = dynamic_pointer_cast<IfcLengthMeasure>( m_ElevationWithFlooring->getDeepCopy() ); }
	return copy_self;
}
void IfcSpace::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCSPACE" << "(";
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
	if( m_LongName ) { m_LongName->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_CompositionType ) { m_CompositionType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ElevationWithFlooring ) { m_ElevationWithFlooring->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcSpace::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcSpace::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const int num_args = (int)args.size();
	if( num_args<11 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcSpace, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcPPException( strserr.str().c_str() ); }
	#ifdef _DEBUG
	if( num_args>11 ){ std::cout << "Wrong parameter count for entity IfcSpace, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; }
	#endif
	m_GlobalId = IfcGloballyUniqueId::createObjectFromStepData( args[0] );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromStepData( args[2] );
	m_Description = IfcText::createObjectFromStepData( args[3] );
	m_ObjectType = IfcLabel::createObjectFromStepData( args[4] );
	readEntityReference( args[5], m_ObjectPlacement, map );
	readEntityReference( args[6], m_Representation, map );
	m_LongName = IfcLabel::createObjectFromStepData( args[7] );
	m_CompositionType = IfcElementCompositionEnum::createObjectFromStepData( args[8] );
	m_PredefinedType = IfcSpaceTypeEnum::createObjectFromStepData( args[9] );
	m_ElevationWithFlooring = IfcLengthMeasure::createObjectFromStepData( args[10] );
}
void IfcSpace::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcSpatialStructureElement::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
	vec_attributes.push_back( std::make_pair( "ElevationWithFlooring", m_ElevationWithFlooring ) );
}
void IfcSpace::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcSpatialStructureElement::getAttributesInverse( vec_attributes_inverse );
	if( m_HasCoverings_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> HasCoverings_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_HasCoverings_inverse.size(); ++i )
		{
			if( !m_HasCoverings_inverse[i].expired() )
			{
				HasCoverings_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelCoversSpaces>( m_HasCoverings_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "HasCoverings_inverse", HasCoverings_inverse_vec_obj ) );
	}
	if( m_BoundedBy_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> BoundedBy_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_BoundedBy_inverse.size(); ++i )
		{
			if( !m_BoundedBy_inverse[i].expired() )
			{
				BoundedBy_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelSpaceBoundary>( m_BoundedBy_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "BoundedBy_inverse", BoundedBy_inverse_vec_obj ) );
	}
}
void IfcSpace::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcSpatialStructureElement::setInverseCounterparts( ptr_self_entity );
}
void IfcSpace::unlinkSelf()
{
	IfcSpatialStructureElement::unlinkSelf();
}
