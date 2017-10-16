/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcGeometricCurveSet.h"
#include "ifcpp/IFC4/include/IfcGeometricSetSelect.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcGeometricCurveSet 
IfcGeometricCurveSet::IfcGeometricCurveSet() {}
IfcGeometricCurveSet::IfcGeometricCurveSet( int id ) { m_id = id; }
IfcGeometricCurveSet::~IfcGeometricCurveSet() {}
shared_ptr<IfcPPObject> IfcGeometricCurveSet::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcGeometricCurveSet> copy_self( new IfcGeometricCurveSet() );
	for( size_t ii=0; ii<m_Elements.size(); ++ii )
	{
		auto item_ii = m_Elements[ii];
		if( item_ii )
		{
			copy_self->m_Elements.push_back( dynamic_pointer_cast<IfcGeometricSetSelect>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcGeometricCurveSet::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCGEOMETRICCURVESET" << "(";
	stream << "(";
	for( size_t ii = 0; ii < m_Elements.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcGeometricSetSelect>& type_object = m_Elements[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ");";
}
void IfcGeometricCurveSet::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcGeometricCurveSet::toString() const { return L"IfcGeometricCurveSet"; }
void IfcGeometricCurveSet::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcGeometricCurveSet, expecting 1, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readSelectList( args[0], m_Elements, map );
}
void IfcGeometricCurveSet::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcGeometricSet::getAttributes( vec_attributes );
}
void IfcGeometricCurveSet::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcGeometricSet::getAttributesInverse( vec_attributes_inverse );
}
void IfcGeometricCurveSet::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcGeometricSet::setInverseCounterparts( ptr_self_entity );
}
void IfcGeometricCurveSet::unlinkFromInverseCounterparts()
{
	IfcGeometricSet::unlinkFromInverseCounterparts();
}
