/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement2D.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcIShapeProfileDef.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcNonNegativeLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPlaneAngleMeasure.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcProfileProperties.h"
#include "ifcpp/IFC4/include/IfcProfileTypeEnum.h"

// ENTITY IfcIShapeProfileDef 
IfcIShapeProfileDef::IfcIShapeProfileDef() {}
IfcIShapeProfileDef::IfcIShapeProfileDef( int id ) { m_id = id; }
IfcIShapeProfileDef::~IfcIShapeProfileDef() {}
shared_ptr<IfcPPObject> IfcIShapeProfileDef::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcIShapeProfileDef> copy_self( new IfcIShapeProfileDef() );
	if( m_ProfileType ) { copy_self->m_ProfileType = dynamic_pointer_cast<IfcProfileTypeEnum>( m_ProfileType->getDeepCopy(options) ); }
	if( m_ProfileName ) { copy_self->m_ProfileName = dynamic_pointer_cast<IfcLabel>( m_ProfileName->getDeepCopy(options) ); }
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement2D>( m_Position->getDeepCopy(options) ); }
	if( m_OverallWidth ) { copy_self->m_OverallWidth = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_OverallWidth->getDeepCopy(options) ); }
	if( m_OverallDepth ) { copy_self->m_OverallDepth = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_OverallDepth->getDeepCopy(options) ); }
	if( m_WebThickness ) { copy_self->m_WebThickness = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_WebThickness->getDeepCopy(options) ); }
	if( m_FlangeThickness ) { copy_self->m_FlangeThickness = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_FlangeThickness->getDeepCopy(options) ); }
	if( m_FilletRadius ) { copy_self->m_FilletRadius = dynamic_pointer_cast<IfcNonNegativeLengthMeasure>( m_FilletRadius->getDeepCopy(options) ); }
	if( m_FlangeEdgeRadius ) { copy_self->m_FlangeEdgeRadius = dynamic_pointer_cast<IfcNonNegativeLengthMeasure>( m_FlangeEdgeRadius->getDeepCopy(options) ); }
	if( m_FlangeSlope ) { copy_self->m_FlangeSlope = dynamic_pointer_cast<IfcPlaneAngleMeasure>( m_FlangeSlope->getDeepCopy(options) ); }
	return copy_self;
}
void IfcIShapeProfileDef::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCISHAPEPROFILEDEF" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_OverallWidth ) { m_OverallWidth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OverallDepth ) { m_OverallDepth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_WebThickness ) { m_WebThickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FlangeThickness ) { m_FlangeThickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FilletRadius ) { m_FilletRadius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FlangeEdgeRadius ) { m_FlangeEdgeRadius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FlangeSlope ) { m_FlangeSlope->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcIShapeProfileDef::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcIShapeProfileDef::toString() const { return L"IfcIShapeProfileDef"; }
void IfcIShapeProfileDef::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 10 ){ std::stringstream err; err << "Wrong parameter count for entity IfcIShapeProfileDef, expecting 10, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map );
	m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_Position, map );
	m_OverallWidth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[3], map );
	m_OverallDepth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[4], map );
	m_WebThickness = IfcPositiveLengthMeasure::createObjectFromSTEP( args[5], map );
	m_FlangeThickness = IfcPositiveLengthMeasure::createObjectFromSTEP( args[6], map );
	m_FilletRadius = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[7], map );
	m_FlangeEdgeRadius = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[8], map );
	m_FlangeSlope = IfcPlaneAngleMeasure::createObjectFromSTEP( args[9], map );
}
void IfcIShapeProfileDef::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcParameterizedProfileDef::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "OverallWidth", m_OverallWidth ) );
	vec_attributes.push_back( std::make_pair( "OverallDepth", m_OverallDepth ) );
	vec_attributes.push_back( std::make_pair( "WebThickness", m_WebThickness ) );
	vec_attributes.push_back( std::make_pair( "FlangeThickness", m_FlangeThickness ) );
	vec_attributes.push_back( std::make_pair( "FilletRadius", m_FilletRadius ) );
	vec_attributes.push_back( std::make_pair( "FlangeEdgeRadius", m_FlangeEdgeRadius ) );
	vec_attributes.push_back( std::make_pair( "FlangeSlope", m_FlangeSlope ) );
}
void IfcIShapeProfileDef::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcParameterizedProfileDef::getAttributesInverse( vec_attributes_inverse );
}
void IfcIShapeProfileDef::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcParameterizedProfileDef::setInverseCounterparts( ptr_self_entity );
}
void IfcIShapeProfileDef::unlinkFromInverseCounterparts()
{
	IfcParameterizedProfileDef::unlinkFromInverseCounterparts();
}
