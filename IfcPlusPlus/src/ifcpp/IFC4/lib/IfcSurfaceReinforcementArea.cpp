/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcRatioMeasure.h"
#include "ifcpp/IFC4/include/IfcSurfaceReinforcementArea.h"

// ENTITY IfcSurfaceReinforcementArea 
IfcSurfaceReinforcementArea::IfcSurfaceReinforcementArea() {}
IfcSurfaceReinforcementArea::IfcSurfaceReinforcementArea( int id ) { m_id = id; }
IfcSurfaceReinforcementArea::~IfcSurfaceReinforcementArea() {}
shared_ptr<IfcPPObject> IfcSurfaceReinforcementArea::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcSurfaceReinforcementArea> copy_self( new IfcSurfaceReinforcementArea() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_SurfaceReinforcement1.size(); ++ii )
	{
		auto item_ii = m_SurfaceReinforcement1[ii];
		if( item_ii )
		{
			copy_self->m_SurfaceReinforcement1.push_back( dynamic_pointer_cast<IfcLengthMeasure>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_SurfaceReinforcement2.size(); ++ii )
	{
		auto item_ii = m_SurfaceReinforcement2[ii];
		if( item_ii )
		{
			copy_self->m_SurfaceReinforcement2.push_back( dynamic_pointer_cast<IfcLengthMeasure>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_ShearReinforcement ) { copy_self->m_ShearReinforcement = dynamic_pointer_cast<IfcRatioMeasure>( m_ShearReinforcement->getDeepCopy(options) ); }
	return copy_self;
}
void IfcSurfaceReinforcementArea::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCSURFACEREINFORCEMENTAREA" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	writeNumericTypeList( stream, m_SurfaceReinforcement1 );
	stream << ",";
	writeNumericTypeList( stream, m_SurfaceReinforcement2 );
	stream << ",";
	if( m_ShearReinforcement ) { m_ShearReinforcement->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcSurfaceReinforcementArea::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcSurfaceReinforcementArea::toString() const { return L"IfcSurfaceReinforcementArea"; }
void IfcSurfaceReinforcementArea::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcSurfaceReinforcementArea, expecting 4, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	readTypeOfRealList( args[1], m_SurfaceReinforcement1 );
	readTypeOfRealList( args[2], m_SurfaceReinforcement2 );
	m_ShearReinforcement = IfcRatioMeasure::createObjectFromSTEP( args[3], map );
}
void IfcSurfaceReinforcementArea::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcStructuralLoadOrResult::getAttributes( vec_attributes );
	if( m_SurfaceReinforcement1.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> SurfaceReinforcement1_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_SurfaceReinforcement1.begin(), m_SurfaceReinforcement1.end(), std::back_inserter( SurfaceReinforcement1_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "SurfaceReinforcement1", SurfaceReinforcement1_vec_object ) );
	}
	if( m_SurfaceReinforcement2.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> SurfaceReinforcement2_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_SurfaceReinforcement2.begin(), m_SurfaceReinforcement2.end(), std::back_inserter( SurfaceReinforcement2_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "SurfaceReinforcement2", SurfaceReinforcement2_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "ShearReinforcement", m_ShearReinforcement ) );
}
void IfcSurfaceReinforcementArea::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcStructuralLoadOrResult::getAttributesInverse( vec_attributes_inverse );
}
void IfcSurfaceReinforcementArea::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcStructuralLoadOrResult::setInverseCounterparts( ptr_self_entity );
}
void IfcSurfaceReinforcementArea::unlinkFromInverseCounterparts()
{
	IfcStructuralLoadOrResult::unlinkFromInverseCounterparts();
}
