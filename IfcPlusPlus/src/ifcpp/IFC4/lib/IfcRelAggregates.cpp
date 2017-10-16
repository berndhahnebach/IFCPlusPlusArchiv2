/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcObjectDefinition.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcRelAggregates 
IfcRelAggregates::IfcRelAggregates() {}
IfcRelAggregates::IfcRelAggregates( int id ) { m_id = id; }
IfcRelAggregates::~IfcRelAggregates() {}
shared_ptr<IfcPPObject> IfcRelAggregates::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcRelAggregates> copy_self( new IfcRelAggregates() );
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
	if( m_RelatingObject ) { copy_self->m_RelatingObject = dynamic_pointer_cast<IfcObjectDefinition>( m_RelatingObject->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_RelatedObjects.size(); ++ii )
	{
		auto item_ii = m_RelatedObjects[ii];
		if( item_ii )
		{
			copy_self->m_RelatedObjects.push_back( dynamic_pointer_cast<IfcObjectDefinition>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcRelAggregates::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCRELAGGREGATES" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_RelatingObject ) { stream << "#" << m_RelatingObject->m_id; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_RelatedObjects );
	stream << ");";
}
void IfcRelAggregates::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcRelAggregates::toString() const { return L"IfcRelAggregates"; }
void IfcRelAggregates::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelAggregates, expecting 6, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	readEntityReference( args[4], m_RelatingObject, map );
	readEntityReferenceList( args[5], m_RelatedObjects, map );
}
void IfcRelAggregates::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcRelDecomposes::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "RelatingObject", m_RelatingObject ) );
	if( m_RelatedObjects.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> RelatedObjects_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_RelatedObjects.begin(), m_RelatedObjects.end(), std::back_inserter( RelatedObjects_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "RelatedObjects", RelatedObjects_vec_object ) );
	}
}
void IfcRelAggregates::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcRelDecomposes::getAttributesInverse( vec_attributes_inverse );
}
void IfcRelAggregates::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcRelDecomposes::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelAggregates> ptr_self = dynamic_pointer_cast<IfcRelAggregates>( ptr_self_entity );
	if( !ptr_self ) { throw IfcPPException( "IfcRelAggregates::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_RelatedObjects.size(); ++i )
	{
		if( m_RelatedObjects[i] )
		{
			m_RelatedObjects[i]->m_Decomposes_inverse.push_back( ptr_self );
		}
	}
	if( m_RelatingObject )
	{
		m_RelatingObject->m_IsDecomposedBy_inverse.push_back( ptr_self );
	}
}
void IfcRelAggregates::unlinkFromInverseCounterparts()
{
	IfcRelDecomposes::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_RelatedObjects.size(); ++i )
	{
		if( m_RelatedObjects[i] )
		{
			std::vector<weak_ptr<IfcRelAggregates> >& Decomposes_inverse = m_RelatedObjects[i]->m_Decomposes_inverse;
			for( auto it_Decomposes_inverse = Decomposes_inverse.begin(); it_Decomposes_inverse != Decomposes_inverse.end(); )
			{
				shared_ptr<IfcRelAggregates> self_candidate( *it_Decomposes_inverse );
				if( self_candidate.get() == this )
				{
					it_Decomposes_inverse= Decomposes_inverse.erase( it_Decomposes_inverse );
				}
				else
				{
					++it_Decomposes_inverse;
				}
			}
		}
	}
	if( m_RelatingObject )
	{
		std::vector<weak_ptr<IfcRelAggregates> >& IsDecomposedBy_inverse = m_RelatingObject->m_IsDecomposedBy_inverse;
		for( auto it_IsDecomposedBy_inverse = IsDecomposedBy_inverse.begin(); it_IsDecomposedBy_inverse != IsDecomposedBy_inverse.end(); )
		{
			shared_ptr<IfcRelAggregates> self_candidate( *it_IsDecomposedBy_inverse );
			if( self_candidate.get() == this )
			{
				it_IsDecomposedBy_inverse= IsDecomposedBy_inverse.erase( it_IsDecomposedBy_inverse );
			}
			else
			{
				++it_IsDecomposedBy_inverse;
			}
		}
	}
}
