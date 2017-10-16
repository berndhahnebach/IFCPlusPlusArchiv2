/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAppliedValue.h"
#include "ifcpp/IFC4/include/IfcConstructionResourceType.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPhysicalQuantity.h"
#include "ifcpp/IFC4/include/IfcPropertySetDefinition.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToResource.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcConstructionResourceType 
IfcConstructionResourceType::IfcConstructionResourceType() {}
IfcConstructionResourceType::IfcConstructionResourceType( int id ) { m_id = id; }
IfcConstructionResourceType::~IfcConstructionResourceType() {}
shared_ptr<IfcPPObject> IfcConstructionResourceType::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcConstructionResourceType> copy_self( new IfcConstructionResourceType() );
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
	if( m_ApplicableOccurrence ) { copy_self->m_ApplicableOccurrence = dynamic_pointer_cast<IfcIdentifier>( m_ApplicableOccurrence->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_HasPropertySets.size(); ++ii )
	{
		auto item_ii = m_HasPropertySets[ii];
		if( item_ii )
		{
			copy_self->m_HasPropertySets.push_back( dynamic_pointer_cast<IfcPropertySetDefinition>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_Identification ) { copy_self->m_Identification = dynamic_pointer_cast<IfcIdentifier>( m_Identification->getDeepCopy(options) ); }
	if( m_LongDescription ) { copy_self->m_LongDescription = dynamic_pointer_cast<IfcText>( m_LongDescription->getDeepCopy(options) ); }
	if( m_ResourceType ) { copy_self->m_ResourceType = dynamic_pointer_cast<IfcLabel>( m_ResourceType->getDeepCopy(options) ); }
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
void IfcConstructionResourceType::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCCONSTRUCTIONRESOURCETYPE" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ApplicableOccurrence ) { m_ApplicableOccurrence->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	writeEntityList( stream, m_HasPropertySets );
	stream << ",";
	if( m_Identification ) { m_Identification->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_LongDescription ) { m_LongDescription->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ResourceType ) { m_ResourceType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	writeEntityList( stream, m_BaseCosts );
	stream << ",";
	if( m_BaseQuantity ) { stream << "#" << m_BaseQuantity->m_id; } else { stream << "$"; }
	stream << ");";
}
void IfcConstructionResourceType::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcConstructionResourceType::toString() const { return L"IfcConstructionResourceType"; }
void IfcConstructionResourceType::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 11 ){ std::stringstream err; err << "Wrong parameter count for entity IfcConstructionResourceType, expecting 11, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ApplicableOccurrence = IfcIdentifier::createObjectFromSTEP( args[4], map );
	readEntityReferenceList( args[5], m_HasPropertySets, map );
	m_Identification = IfcIdentifier::createObjectFromSTEP( args[6], map );
	m_LongDescription = IfcText::createObjectFromSTEP( args[7], map );
	m_ResourceType = IfcLabel::createObjectFromSTEP( args[8], map );
	readEntityReferenceList( args[9], m_BaseCosts, map );
	readEntityReference( args[10], m_BaseQuantity, map );
}
void IfcConstructionResourceType::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcTypeResource::getAttributes( vec_attributes );
	if( m_BaseCosts.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> BaseCosts_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_BaseCosts.begin(), m_BaseCosts.end(), std::back_inserter( BaseCosts_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "BaseCosts", BaseCosts_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "BaseQuantity", m_BaseQuantity ) );
}
void IfcConstructionResourceType::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcTypeResource::getAttributesInverse( vec_attributes_inverse );
}
void IfcConstructionResourceType::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcTypeResource::setInverseCounterparts( ptr_self_entity );
}
void IfcConstructionResourceType::unlinkFromInverseCounterparts()
{
	IfcTypeResource::unlinkFromInverseCounterparts();
}
