/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4/include/IfcDirection.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcProfileDef.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcSurfaceOfLinearExtrusion.h"

// ENTITY IfcSurfaceOfLinearExtrusion 
IfcSurfaceOfLinearExtrusion::IfcSurfaceOfLinearExtrusion() {}
IfcSurfaceOfLinearExtrusion::IfcSurfaceOfLinearExtrusion( int id ) { m_id = id; }
IfcSurfaceOfLinearExtrusion::~IfcSurfaceOfLinearExtrusion() {}
shared_ptr<IfcPPObject> IfcSurfaceOfLinearExtrusion::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcSurfaceOfLinearExtrusion> copy_self( new IfcSurfaceOfLinearExtrusion() );
	if( m_SweptCurve )
	{
		if( options.shallow_copy_IfcProfileDef ) { copy_self->m_SweptCurve = m_SweptCurve; }
		else { copy_self->m_SweptCurve = dynamic_pointer_cast<IfcProfileDef>( m_SweptCurve->getDeepCopy(options) ); }
	}
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement3D>( m_Position->getDeepCopy(options) ); }
	if( m_ExtrudedDirection ) { copy_self->m_ExtrudedDirection = dynamic_pointer_cast<IfcDirection>( m_ExtrudedDirection->getDeepCopy(options) ); }
	if( m_Depth ) { copy_self->m_Depth = dynamic_pointer_cast<IfcLengthMeasure>( m_Depth->getDeepCopy(options) ); }
	return copy_self;
}
void IfcSurfaceOfLinearExtrusion::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCSURFACEOFLINEAREXTRUSION" << "(";
	if( m_SweptCurve ) { stream << "#" << m_SweptCurve->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_ExtrudedDirection ) { stream << "#" << m_ExtrudedDirection->m_id; } else { stream << "$"; }
	stream << ",";
	if( m_Depth ) { m_Depth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcSurfaceOfLinearExtrusion::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcSurfaceOfLinearExtrusion::toString() const { return L"IfcSurfaceOfLinearExtrusion"; }
void IfcSurfaceOfLinearExtrusion::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcSurfaceOfLinearExtrusion, expecting 4, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReference( args[0], m_SweptCurve, map );
	readEntityReference( args[1], m_Position, map );
	readEntityReference( args[2], m_ExtrudedDirection, map );
	m_Depth = IfcLengthMeasure::createObjectFromSTEP( args[3], map );
}
void IfcSurfaceOfLinearExtrusion::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcSweptSurface::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "ExtrudedDirection", m_ExtrudedDirection ) );
	vec_attributes.push_back( std::make_pair( "Depth", m_Depth ) );
}
void IfcSurfaceOfLinearExtrusion::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcSweptSurface::getAttributesInverse( vec_attributes_inverse );
}
void IfcSurfaceOfLinearExtrusion::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcSweptSurface::setInverseCounterparts( ptr_self_entity );
}
void IfcSurfaceOfLinearExtrusion::unlinkFromInverseCounterparts()
{
	IfcSweptSurface::unlinkFromInverseCounterparts();
}
