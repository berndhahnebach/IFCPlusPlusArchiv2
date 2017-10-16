/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcMaterialDefinition.h"
#include "ifcpp/IFC4/include/IfcMaterialProperties.h"
#include "ifcpp/IFC4/include/IfcRelAssociatesMaterial.h"

// ENTITY IfcMaterialDefinition 
IfcMaterialDefinition::IfcMaterialDefinition() {}
IfcMaterialDefinition::IfcMaterialDefinition( int id ) { m_id = id; }
IfcMaterialDefinition::~IfcMaterialDefinition() {}
shared_ptr<IfcPPObject> IfcMaterialDefinition::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcMaterialDefinition> copy_self( new IfcMaterialDefinition() );
	return copy_self;
}
void IfcMaterialDefinition::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCMATERIALDEFINITION" << "(";
	stream << ");";
}
void IfcMaterialDefinition::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcMaterialDefinition::toString() const { return L"IfcMaterialDefinition"; }
void IfcMaterialDefinition::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
}
void IfcMaterialDefinition::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
}
void IfcMaterialDefinition::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	if( m_AssociatedTo_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> AssociatedTo_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_AssociatedTo_inverse.size(); ++i )
		{
			if( !m_AssociatedTo_inverse[i].expired() )
			{
				AssociatedTo_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelAssociatesMaterial>( m_AssociatedTo_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "AssociatedTo_inverse", AssociatedTo_inverse_vec_obj ) );
	}
	if( m_HasExternalReferences_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> HasExternalReferences_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_HasExternalReferences_inverse.size(); ++i )
		{
			if( !m_HasExternalReferences_inverse[i].expired() )
			{
				HasExternalReferences_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcExternalReferenceRelationship>( m_HasExternalReferences_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "HasExternalReferences_inverse", HasExternalReferences_inverse_vec_obj ) );
	}
	if( m_HasProperties_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> HasProperties_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_HasProperties_inverse.size(); ++i )
		{
			if( !m_HasProperties_inverse[i].expired() )
			{
				HasProperties_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcMaterialProperties>( m_HasProperties_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "HasProperties_inverse", HasProperties_inverse_vec_obj ) );
	}
}
void IfcMaterialDefinition::setInverseCounterparts( shared_ptr<IfcPPEntity> )
{
}
void IfcMaterialDefinition::unlinkFromInverseCounterparts()
{
}
