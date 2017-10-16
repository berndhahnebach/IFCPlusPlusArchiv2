/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4/include/IfcCurve.h"
#include "ifcpp/IFC4/include/IfcParameterValue.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcProfileDef.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcSurface.h"
#include "ifcpp/IFC4/include/IfcSurfaceCurveSweptAreaSolid.h"

// ENTITY IfcSurfaceCurveSweptAreaSolid 
IfcSurfaceCurveSweptAreaSolid::IfcSurfaceCurveSweptAreaSolid() {}
IfcSurfaceCurveSweptAreaSolid::IfcSurfaceCurveSweptAreaSolid( int id ) { m_id = id; }
IfcSurfaceCurveSweptAreaSolid::~IfcSurfaceCurveSweptAreaSolid() {}
shared_ptr<IfcPPObject> IfcSurfaceCurveSweptAreaSolid::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcSurfaceCurveSweptAreaSolid> copy_self( new IfcSurfaceCurveSweptAreaSolid() );
	if( m_SweptArea )
	{
		if( options.shallow_copy_IfcProfileDef ) { copy_self->m_SweptArea = m_SweptArea; }
		else { copy_self->m_SweptArea = dynamic_pointer_cast<IfcProfileDef>( m_SweptArea->getDeepCopy(options) ); }
	}
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement3D>( m_Position->getDeepCopy(options) ); }
	if( m_Directrix ) { copy_self->m_Directrix = dynamic_pointer_cast<IfcCurve>( m_Directrix->getDeepCopy(options) ); }
	if( m_StartParam ) { copy_self->m_StartParam = dynamic_pointer_cast<IfcParameterValue>( m_StartParam->getDeepCopy(options) ); }
	if( m_EndParam ) { copy_self->m_EndParam = dynamic_pointer_cast<IfcParameterValue>( m_EndParam->getDeepCopy(options) ); }
	if( m_ReferenceSurface ) { copy_self->m_ReferenceSurface = dynamic_pointer_cast<IfcSurface>( m_ReferenceSurface->getDeepCopy(options) ); }
	return copy_self;
}
void IfcSurfaceCurveSweptAreaSolid::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCSURFACECURVESWEPTAREASOLID" << "(";
	if( m_SweptArea ) { stream << "#" << m_SweptArea->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Directrix ) { stream << "#" << m_Directrix->m_id; } else { stream << "$"; }
	stream << ",";
	if( m_StartParam ) { m_StartParam->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EndParam ) { m_EndParam->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ReferenceSurface ) { stream << "#" << m_ReferenceSurface->m_id; } else { stream << "$"; }
	stream << ");";
}
void IfcSurfaceCurveSweptAreaSolid::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcSurfaceCurveSweptAreaSolid::toString() const { return L"IfcSurfaceCurveSweptAreaSolid"; }
void IfcSurfaceCurveSweptAreaSolid::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcSurfaceCurveSweptAreaSolid, expecting 6, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReference( args[0], m_SweptArea, map );
	readEntityReference( args[1], m_Position, map );
	readEntityReference( args[2], m_Directrix, map );
	m_StartParam = IfcParameterValue::createObjectFromSTEP( args[3], map );
	m_EndParam = IfcParameterValue::createObjectFromSTEP( args[4], map );
	readEntityReference( args[5], m_ReferenceSurface, map );
}
void IfcSurfaceCurveSweptAreaSolid::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcSweptAreaSolid::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Directrix", m_Directrix ) );
	vec_attributes.push_back( std::make_pair( "StartParam", m_StartParam ) );
	vec_attributes.push_back( std::make_pair( "EndParam", m_EndParam ) );
	vec_attributes.push_back( std::make_pair( "ReferenceSurface", m_ReferenceSurface ) );
}
void IfcSurfaceCurveSweptAreaSolid::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcSweptAreaSolid::getAttributesInverse( vec_attributes_inverse );
}
void IfcSurfaceCurveSweptAreaSolid::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcSweptAreaSolid::setInverseCounterparts( ptr_self_entity );
}
void IfcSurfaceCurveSweptAreaSolid::unlinkFromInverseCounterparts()
{
	IfcSweptAreaSolid::unlinkFromInverseCounterparts();
}
