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
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IfcPPEntityEnums.h"
#include "include/IfcGloballyUniqueId.h"
#include "include/IfcLabel.h"
#include "include/IfcObjectDefinition.h"
#include "include/IfcObjectTypeEnum.h"
#include "include/IfcOwnerHistory.h"
#include "include/IfcRelAssignsToResource.h"
#include "include/IfcResource.h"
#include "include/IfcResourceSelect.h"
#include "include/IfcText.h"
#include "include/IfcTypeResource.h"

// ENTITY IfcRelAssignsToResource 
IfcRelAssignsToResource::IfcRelAssignsToResource() { m_entity_enum = IFCRELASSIGNSTORESOURCE; }
IfcRelAssignsToResource::IfcRelAssignsToResource( int id ) { m_id = id; m_entity_enum = IFCRELASSIGNSTORESOURCE; }
IfcRelAssignsToResource::~IfcRelAssignsToResource() {}
shared_ptr<IfcPPObject> IfcRelAssignsToResource::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcRelAssignsToResource> copy_self( new IfcRelAssignsToResource() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = shared_ptr<IfcGloballyUniqueId>(new IfcGloballyUniqueId( createGUID32_wstr().c_str() ) ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_RelatedObjects.size(); ++ii )
	{
		auto item_ii = m_RelatedObjects[ii];
		if( item_ii )
		{
			copy_self->m_RelatedObjects.push_back( dynamic_pointer_cast<IfcObjectDefinition>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_RelatedObjectsType ) { copy_self->m_RelatedObjectsType = dynamic_pointer_cast<IfcObjectTypeEnum>( m_RelatedObjectsType->getDeepCopy(options) ); }
	if( m_RelatingResource ) { copy_self->m_RelatingResource = dynamic_pointer_cast<IfcResourceSelect>( m_RelatingResource->getDeepCopy(options) ); }
	return copy_self;
}
void IfcRelAssignsToResource::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCRELASSIGNSTORESOURCE" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	writeEntityList( stream, m_RelatedObjects );
	stream << ",";
	if( m_RelatedObjectsType ) { m_RelatedObjectsType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_RelatingResource ) { m_RelatingResource->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcRelAssignsToResource::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
void IfcRelAssignsToResource::readStepArguments( const std::vector<std::wstring>& args, const boost::unordered_map<int,shared_ptr<IfcPPEntity> >& map )
{
	const int num_args = (int)args.size();
	if( num_args != 7 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelAssignsToResource, expecting 7, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0] );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2] );
	m_Description = IfcText::createObjectFromSTEP( args[3] );
	readEntityReferenceList( args[4], m_RelatedObjects, map );
	m_RelatedObjectsType = IfcObjectTypeEnum::createObjectFromSTEP( args[5] );
	m_RelatingResource = IfcResourceSelect::createObjectFromSTEP( args[6], map );
}
void IfcRelAssignsToResource::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcRelAssigns::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "RelatingResource", m_RelatingResource ) );
}
void IfcRelAssignsToResource::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcRelAssigns::getAttributesInverse( vec_attributes_inverse );
}
void IfcRelAssignsToResource::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcRelAssigns::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelAssignsToResource> ptr_self = dynamic_pointer_cast<IfcRelAssignsToResource>( ptr_self_entity );
	if( !ptr_self ) { throw IfcPPException( "IfcRelAssignsToResource::setInverseCounterparts: type mismatch" ); }
	shared_ptr<IfcResource>  RelatingResource_IfcResource = dynamic_pointer_cast<IfcResource>( m_RelatingResource );
	if( RelatingResource_IfcResource )
	{
		RelatingResource_IfcResource->m_ResourceOf_inverse.push_back( ptr_self );
	}
	shared_ptr<IfcTypeResource>  RelatingResource_IfcTypeResource = dynamic_pointer_cast<IfcTypeResource>( m_RelatingResource );
	if( RelatingResource_IfcTypeResource )
	{
		RelatingResource_IfcTypeResource->m_ResourceOf_inverse.push_back( ptr_self );
	}
}
void IfcRelAssignsToResource::unlinkFromInverseCounterparts()
{
	IfcRelAssigns::unlinkFromInverseCounterparts();
	shared_ptr<IfcResource>  RelatingResource_IfcResource = dynamic_pointer_cast<IfcResource>( m_RelatingResource );
	if( RelatingResource_IfcResource )
	{
		std::vector<weak_ptr<IfcRelAssignsToResource> >& ResourceOf_inverse = RelatingResource_IfcResource->m_ResourceOf_inverse;
		for( auto it_ResourceOf_inverse = ResourceOf_inverse.begin(); it_ResourceOf_inverse != ResourceOf_inverse.end(); )
		{
			shared_ptr<IfcRelAssignsToResource> self_candidate( *it_ResourceOf_inverse );
			if( self_candidate.get() == this )
			{
				it_ResourceOf_inverse= ResourceOf_inverse.erase( it_ResourceOf_inverse );
			}
			else
			{
				++it_ResourceOf_inverse;
			}
		}
	}
	shared_ptr<IfcTypeResource>  RelatingResource_IfcTypeResource = dynamic_pointer_cast<IfcTypeResource>( m_RelatingResource );
	if( RelatingResource_IfcTypeResource )
	{
		std::vector<weak_ptr<IfcRelAssignsToResource> >& ResourceOf_inverse = RelatingResource_IfcTypeResource->m_ResourceOf_inverse;
		for( auto it_ResourceOf_inverse = ResourceOf_inverse.begin(); it_ResourceOf_inverse != ResourceOf_inverse.end(); )
		{
			shared_ptr<IfcRelAssignsToResource> self_candidate( *it_ResourceOf_inverse );
			if( self_candidate.get() == this )
			{
				it_ResourceOf_inverse= ResourceOf_inverse.erase( it_ResourceOf_inverse );
			}
			else
			{
				++it_ResourceOf_inverse;
			}
		}
	}
}
