/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAppliedValue.h"
#include "ifcpp/IFC4/include/IfcConstructionResource.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPhysicalQuantity.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToResource.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcResourceTime.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcConstructionResource 
IfcConstructionResource::IfcConstructionResource() {}
IfcConstructionResource::IfcConstructionResource( int id ) { m_id = id; }
IfcConstructionResource::~IfcConstructionResource() {}
shared_ptr<IfcPPObject> IfcConstructionResource::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcConstructionResource> copy_self( new IfcConstructionResource() );
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
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy(options) ); }
	if( m_Identification ) { copy_self->m_Identification = dynamic_pointer_cast<IfcIdentifier>( m_Identification->getDeepCopy(options) ); }
	if( m_LongDescription ) { copy_self->m_LongDescription = dynamic_pointer_cast<IfcText>( m_LongDescription->getDeepCopy(options) ); }
	if( m_Usage ) { copy_self->m_Usage = dynamic_pointer_cast<IfcResourceTime>( m_Usage->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_BaseCosts.size(); ++ii )
	{
		auto item_ii = m_BaseCosts[ii];
		if( item_ii )
		{
			copy_self->m_BaseCosts.push_back( dynamic_pointer_cast<IfcAppliedValue>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_BaseQuantity ) { copy_self->m_BaseQuantity = dynamic_pointer_cast<IfcPhysicalQuantity>( m_BaseQuantity->getDeepCopy(options) ); }
	return copy_self;
}
void IfcConstructionResource::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCCONSTRUCTIONRESOURCE" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Identification ) { m_Identification->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_LongDescription ) { m_LongDescription->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Usage ) { stream << "#" << m_Usage->m_id; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_BaseCosts );
	stream << ",";
	if( m_BaseQuantity ) { stream << "#" << m_BaseQuantity->m_id; } else { stream << "$"; }
	stream << ");";
}
void IfcConstructionResource::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcConstructionResource::toString() const { return L"IfcConstructionResource"; }
void IfcConstructionResource::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 10 ){ std::stringstream err; err << "Wrong parameter count for entity IfcConstructionResource, expecting 10, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	m_Identification = IfcIdentifier::createObjectFromSTEP( args[5], map );
	m_LongDescription = IfcText::createObjectFromSTEP( args[6], map );
	readEntityReference( args[7], m_Usage, map );
	readEntityReferenceList( args[8], m_BaseCosts, map );
	readEntityReference( args[9], m_BaseQuantity, map );
}
void IfcConstructionResource::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcResource::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Usage", m_Usage ) );
	if( m_BaseCosts.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> BaseCosts_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_BaseCosts.begin(), m_BaseCosts.end(), std::back_inserter( BaseCosts_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "BaseCosts", BaseCosts_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "BaseQuantity", m_BaseQuantity ) );
}
void IfcConstructionResource::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcResource::getAttributesInverse( vec_attributes_inverse );
}
void IfcConstructionResource::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcResource::setInverseCounterparts( ptr_self_entity );
}
void IfcConstructionResource::unlinkFromInverseCounterparts()
{
	IfcResource::unlinkFromInverseCounterparts();
}
