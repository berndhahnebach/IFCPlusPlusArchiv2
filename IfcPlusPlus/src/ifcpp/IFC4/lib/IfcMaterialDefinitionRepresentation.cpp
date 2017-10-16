/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcMaterial.h"
#include "ifcpp/IFC4/include/IfcMaterialDefinitionRepresentation.h"
#include "ifcpp/IFC4/include/IfcRepresentation.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcMaterialDefinitionRepresentation 
IfcMaterialDefinitionRepresentation::IfcMaterialDefinitionRepresentation() {}
IfcMaterialDefinitionRepresentation::IfcMaterialDefinitionRepresentation( int id ) { m_id = id; }
IfcMaterialDefinitionRepresentation::~IfcMaterialDefinitionRepresentation() {}
shared_ptr<IfcPPObject> IfcMaterialDefinitionRepresentation::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcMaterialDefinitionRepresentation> copy_self( new IfcMaterialDefinitionRepresentation() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Representations.size(); ++ii )
	{
		auto item_ii = m_Representations[ii];
		if( item_ii )
		{
			copy_self->m_Representations.push_back( dynamic_pointer_cast<IfcRepresentation>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_RepresentedMaterial ) { copy_self->m_RepresentedMaterial = dynamic_pointer_cast<IfcMaterial>( m_RepresentedMaterial->getDeepCopy(options) ); }
	return copy_self;
}
void IfcMaterialDefinitionRepresentation::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCMATERIALDEFINITIONREPRESENTATION" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	writeEntityList( stream, m_Representations );
	stream << ",";
	if( m_RepresentedMaterial ) { stream << "#" << m_RepresentedMaterial->m_id; } else { stream << "$"; }
	stream << ");";
}
void IfcMaterialDefinitionRepresentation::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcMaterialDefinitionRepresentation::toString() const { return L"IfcMaterialDefinitionRepresentation"; }
void IfcMaterialDefinitionRepresentation::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcMaterialDefinitionRepresentation, expecting 4, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	readEntityReferenceList( args[2], m_Representations, map );
	readEntityReference( args[3], m_RepresentedMaterial, map );
}
void IfcMaterialDefinitionRepresentation::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcProductRepresentation::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "RepresentedMaterial", m_RepresentedMaterial ) );
}
void IfcMaterialDefinitionRepresentation::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcProductRepresentation::getAttributesInverse( vec_attributes_inverse );
}
void IfcMaterialDefinitionRepresentation::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcProductRepresentation::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcMaterialDefinitionRepresentation> ptr_self = dynamic_pointer_cast<IfcMaterialDefinitionRepresentation>( ptr_self_entity );
	if( !ptr_self ) { throw IfcPPException( "IfcMaterialDefinitionRepresentation::setInverseCounterparts: type mismatch" ); }
	if( m_RepresentedMaterial )
	{
		m_RepresentedMaterial->m_HasRepresentation_inverse.push_back( ptr_self );
	}
}
void IfcMaterialDefinitionRepresentation::unlinkFromInverseCounterparts()
{
	IfcProductRepresentation::unlinkFromInverseCounterparts();
	if( m_RepresentedMaterial )
	{
		std::vector<weak_ptr<IfcMaterialDefinitionRepresentation> >& HasRepresentation_inverse = m_RepresentedMaterial->m_HasRepresentation_inverse;
		for( auto it_HasRepresentation_inverse = HasRepresentation_inverse.begin(); it_HasRepresentation_inverse != HasRepresentation_inverse.end(); )
		{
			shared_ptr<IfcMaterialDefinitionRepresentation> self_candidate( *it_HasRepresentation_inverse );
			if( self_candidate.get() == this )
			{
				it_HasRepresentation_inverse= HasRepresentation_inverse.erase( it_HasRepresentation_inverse );
			}
			else
			{
				++it_HasRepresentation_inverse;
			}
		}
	}
}
